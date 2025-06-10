#include"Harl.hpp"

// ```bash
// ./harlFilter "DEBUG"
// ./harlFilter "INFO"
// ./harlFilter "WARNING"
// ./harlFilter "ERROR"
// ./harlFilter "I am not sure how tired I am today..."
// ```
int main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 2) {
		std::cout << "Error: Invalid argument." << std::endl;
		std::exit(EXIT_FAILURE);
	}
	harl.complain(argv[1]);
	return (EXIT_SUCCESS);
}
