#ifndef HUMANB_HPP
# define HUMANB_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<iostream>
#include<string>
#include"Weapon.hpp"

// ------------------------------------------------
// class
// ------------------------------------------------

class	HumanB {
	public:
		HumanB(std::string name);
		void attack();
		/*
		 * 値渡しは一時的なローカル変数のため、コンストラクタ終了時に破棄される
		 * →ポインタ型のweapon_が破棄されたオブジェクトのアドレスを指してしまう。
		 * →これを防ぐため、参照渡しにする
		 */
		void setWeapon(Weapon& weapon);

	private:
		std::string name_;
		Weapon*	weapon_;//ポインタ型
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
