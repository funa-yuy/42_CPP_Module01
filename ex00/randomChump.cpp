#include"Zombie.hpp"

void randomChump( std::string name)
{
	/* ローカル変数としてZombieを呼び出す */
	Zombie	z(name);

	z.announce();
	/* ローカル変数のため、randomChump関数を抜けるとデストラクタが呼ばれる */
}
