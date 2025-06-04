#include"Zombie.hpp"

Zombie::Zombie(std::string name) : name_(name) {}

//todo: デストラクタ
//std::cout << name_ << "Good by..." << std::endl;

void	Zombie::announce() {
	std::cout << name_ << ": >: BraiiiiiiinnnzzzZ..." << std::endl;
}
