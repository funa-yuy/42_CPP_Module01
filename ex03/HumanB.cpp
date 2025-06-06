#include"HumanB.hpp"


HumanB::HumanB(std::string name) : name_(name), weapon_(NULL) {}

void	HumanB::attack() {
	if (weapon_) {
		std::cout << name_
				<< " attacks with their "
				<< weapon_->getType() << std::endl;
	} else {
		std::cout << name_
				<< " NO WEAPON!! "
				<< std::endl;
	}
}

void HumanB::setWeapon(Weapon& weapon) {
	weapon_ = &weapon;
}
