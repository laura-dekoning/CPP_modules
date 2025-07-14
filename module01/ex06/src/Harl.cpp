/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/14 15:54:15 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/14 17:33:54 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

void	Harl::_debug(void){

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I just want to point out that if I had wings like the Nightborn, I wouldn’t walk anywhere. Ever. I’d fly dramatically into every room, even just to get snacks. That’s not a bug, it’s a feature." << std::endl;
}

void	Harl::_info(void){

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "So let me get this straight—I'm supposed to fight in a blood trial with ancient vampire murderers, but I can't bring my emotional support dagger? This feels like a flaw in the system, I’m just saying." << std::endl;
}

void	Harl::_warning(void){

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I’m not saying I’d betray the goddess of death, but if she asks me to do cardio again in a blood-soaked labyrinth, I might file a formal complaint. With who? I don’t know. Someone divine." << std::endl;
}

void	Harl::_error(void){

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Why is the vampire prince brooding in my doorway again? I’ve had enough morally gray men for one lifetime. Tell Nyaxia I’m out. I don’t care if the fate of the realm depends on my trauma arc!" << std::endl;
}

void	Harl::complain(std::string level){
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunc functions[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	for (int i = 0; i < 4; i++)
		if (level == levels[i]) return (this->*functions[i])();
}
