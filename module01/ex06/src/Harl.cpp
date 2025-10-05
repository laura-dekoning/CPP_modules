/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/07/14 15:54:15 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/10/05 15:08:26 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::_debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I’m not saying I Googled the entire tech manual before coming in, but I could fix this better than your ‘expert’ just by watching one YouTube video. Just saying." << std::endl;
}

void Harl::_info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I specifically asked for my burger medium rare, not medium-wrong. I know what I said. Kevin always knows what he said." << std::endl;
}

void Harl::_warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "If one more intern tries to tell me how to reset the Wi-Fi, I will escalate this to corporate. I don’t care if it’s my kid’s Zoom class." << std::endl;
}

void Harl::_error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is outrageous! I want to speak to whoever thought charging for guac was acceptable in this economy. No, I don’t care if it's company policy." << std::endl;
}

Level	getLevelEnum(const std::string &level){
	if (level == "DEBUG")
		return DEBUG;
	else if (level == "INFO")
		return INFO;
	else if (level == "WARNING")
		return WARNING;
	else if (level == "ERROR")
		return ERROR;
	else
		return INVALID;
}

void	Harl::complain(std::string level){
	HarlFunc functions[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	Level	levelEnum = getLevelEnum(level);
	switch (levelEnum){
		case DEBUG:
			for (int i = levelEnum; i < 4; i++) {
				(this->*functions[i])();
				std::cout << std::endl;
			}
			break;
		case INFO:
			for (int i = levelEnum; i < 4; i++) {
				(this->*functions[i])();
				std::cout << std::endl;
			}
			break;
		case WARNING:
			for (int i = levelEnum; i < 4; i++) {
				(this->*functions[i])();
				std::cout << std::endl;
			}
			break;
		case ERROR:
			for (int i = levelEnum; i < 4; i++) {
				(this->*functions[i])();
				std::cout << std::endl;
			}
			break;
		default:
			std::cout << "[ Kevin has left a strongly worded review online ]" << std::endl;
	}
	return ;
}
