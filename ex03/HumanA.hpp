#ifndef HUMANA_HPP
# define HUMANA_HPP

// ------------------------------------------------
// include
// ------------------------------------------------

#include<iostream>
#include<string>
#include"Weapon.hpp"

// ------------------------------------------------
// class
// ------------------------------------------------

class	HumanA {
	public:
		/*
		 * 値渡しは一時的なローカル変数のため、コンストラクタ終了時に破棄される
		 * →参照型のweapon_が破棄されたオブジェクトを参照してしまう。
		 * →これを防ぐため、参照渡しにする
		 */
		HumanA(std::string name, Weapon& weapon);
		void attack();

	private:
		std::string name_;
		Weapon&	weapon_;//参照型
};

// ------------------------------------------------
// function
// ------------------------------------------------


#endif
