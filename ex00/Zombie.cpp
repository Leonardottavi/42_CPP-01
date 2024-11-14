/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:19:57 by lottavi           #+#    #+#             */
/*   Updated: 2024/11/14 15:48:12 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor to initialize the name
Zombie::Zombie(std::string zombieName) : name(zombieName) {}

// Destructor to print a message when a zombie is destroyed
Zombie::~Zombie() {
	std::cout << name << " is destroyed." << std::endl;
}

// Member function to announce the zombie
void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
