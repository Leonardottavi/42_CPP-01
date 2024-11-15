/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:10:08 by lottavi           #+#    #+#             */
/*   Updated: 2024/11/15 16:58:22 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
	: filename(filename), s1(s1), s2(s2) {}

void FileReplacer::replace() const {
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open()) {
		throw std::runtime_error("Could not open input file");
	}

	std::ostringstream buffer;
	buffer << inputFile.rdbuf();
	std::string content = buffer.str();
	inputFile.close();

	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos) {
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}

	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile.is_open()) {
		throw std::runtime_error("Could not open output file");
	}

	outputFile << content;
	outputFile.close();
}
