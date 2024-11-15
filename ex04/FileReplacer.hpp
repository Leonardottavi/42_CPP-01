/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:09:57 by lottavi           #+#    #+#             */
/*   Updated: 2024/11/15 16:58:26 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>

class FileReplacer {
private:
	std::string filename;
	std::string s1;
	std::string s2;

public:
	FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2);
	void replace() const;
};

#endif // FILEREPLACER_HPP
