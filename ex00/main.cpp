#include"Zombie.hpp"

int	main() {
	Zombie	*heap_1;
	Zombie	*heap_2;

	heap_1 = newZombie("heap_1");
	heap_1->announce();
	randomChump("stack_1");

	std::cout << std::endl;

	randomChump("stack_2");
	heap_2 = newZombie("heap_2");
	heap_2->announce();


	std::cout << std::endl;

	/* deleteにより、デストラクタが呼ばれる */
	delete heap_1;
	delete heap_2;
	return (EXIT_SUCCESS);
}
