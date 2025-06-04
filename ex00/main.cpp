#include"Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*z;
	//todo: newのやり方

	//newでZombieを作成 & nameを設定
	return (z);
}

void randomChump( std::string name)
{
	//動的にZombieを確保はしない。ただ、nameでannounceするだけ
	/* nameを引数としてZombieクラスのコンストラクタを呼び出し、初期化 */
	Zombie	z(name);

	z.announce();
}

int	main()
{
	//ゾンビクラスの配列を宣言
	Zombie	*z;

	z = newZombie("Foo");
	randomChump("hoge");

	//todo: デストラクタの使い方
	return (EXIT_SUCCESS);
}
