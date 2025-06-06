#ifndef WEAPON_HPP
# define WEAPON_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<iostream>
#include<string>
#include<cstdlib>

// ------------------------------------------------
// class
// ------------------------------------------------

class Weapon {
	public:
		Weapon(std::string type);
		// ~Weapon();
		std::string getType();
		void setType(std::string settype);

	private:
		std::string	type_;
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
