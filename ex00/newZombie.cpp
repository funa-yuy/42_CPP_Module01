#include"Zombie.hpp"

Zombie*	newZombie(std::string name) {
	/* new演算子で、ヒープ領域にメモリを動的に確保 */
	Zombie	*z = new Zombie(name);

	return (z);
}
