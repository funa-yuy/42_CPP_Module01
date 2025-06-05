#include"Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : name_(name) {}

Zombie::~Zombie() {
	std::cout << name_ << ": Good by..." << std::endl;
}

void	Zombie::announce() {
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string setname) {
	name_ = setname;
}
