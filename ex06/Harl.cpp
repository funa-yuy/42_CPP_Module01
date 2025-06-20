#include"Harl.hpp"

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl
			  << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl
			  << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl
			  << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	lv_num;

	lv_num = -1;
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			lv_num = i;
			break;
		}
	}

	switch (lv_num) {
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case 0:
			debug();
			/* FALL THROUGH */
		case 1:
			info();
			/* FALL THROUGH */
		case 2:
			warning();
			/* FALL THROUGH */
		case 3:
			error();
	}
	return ;
}
