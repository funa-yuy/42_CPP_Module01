#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<iostream>
#include<string>

// ------------------------------------------------
// class
// ------------------------------------------------

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);

	private:
		std::string	name_;
};

// ------------------------------------------------
// function
// ------------------------------------------------

Zombie*	newZombie(std::string name);
void 	randomChump( std::string name);

#endif
