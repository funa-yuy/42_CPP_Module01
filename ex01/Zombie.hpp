#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<iostream>
#include<string>
#include <cstdlib>

// ------------------------------------------------
// class
// ------------------------------------------------

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string setname);

	private:
		std::string	name_;
};

// ------------------------------------------------
// function
// ------------------------------------------------

Zombie*	zombieHorde(int N, std::string name);

#endif
