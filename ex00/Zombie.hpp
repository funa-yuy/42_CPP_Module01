#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<string>

// ------------------------------------------------
// class
// ------------------------------------------------

class Zombie {
	public:
		Zombie(std::string name);
		//todo: デストラクタ
		void announce(void);

	private:
		std::string	name_;
};

// ------------------------------------------------
// function
// ------------------------------------------------

Zombie*	newZombie(std::string name);
void randomChump( std::string name);

#endif
