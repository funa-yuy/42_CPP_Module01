#include"Zombie.hpp"

// ```bash
// valgrind --leak-check=full ./zombiehorde
// ```

int main()
{
	Zombie *z;
	int	N;

	N = 5;
	std::cout << "N = " << N << "zombie_name = " << "hoge" <<std::endl;
	z = zombieHorde(N, "hoge");
	for(int i = 0; i < N; i++)
		z[i].announce();
	delete []z;

	N = 0;
	std::cout << "N = " << N << "zombie_name = " << "rei" <<std::endl;
	z = zombieHorde(N, "rei");
	for(int i = 0; i < N; i++)
		z[i].announce();
	delete []z;

	// ```bash
	// ./zombiehorde  | grep "foo: BraiiiiiiinnnzzzZ..." | wc -l
	// ```
	// N = 100;
	// std::cout << "N = " << N << "zombie_name = " << "foo" <<std::endl;
	// z = zombieHorde(N, "foo");
	// for(int i = 0; i < N; i++)
	// 	z[i].announce();
	// delete []z;

	return (EXIT_SUCCESS);
}
