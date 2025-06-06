#include"Weapon.hpp"
#include"HumanA.hpp"
#include"HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		//bobのweapon_を参照型にしないと、clubの変更がbobのweapon_に反映されない
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		//jimのweapon_をポインタ型にしないと、コンストラクタで初期化する時にコンパイルエラーが起きる。
		//→参照型はコンストラクタでの初期化が必要なため。
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
