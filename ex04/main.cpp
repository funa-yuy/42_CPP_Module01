#include<iostream>
#include<string>
#include <cstdlib>
#include <fstream>

std::string	loadInputFile(char *file, std::string s1, std::string s2) {
	std::string line;
	std::string lines;

	std::fstream in_file(file);  // 読み込むファイルのパスを指定
	if (!in_file.is_open()) {
		std::cout << "Error: Open failed." << std::endl;
		std::exit(EXIT_FAILURE);
	}
	while (std::getline(in_file, line)) {  // 1行ずつ読み込む
		size_t begin = line.find(s1);
		if (begin != std::string::npos)
		{
			// lineのうち、beginからs1.size()削除
			line.erase(begin, s1.size());
			// lineのうち、beginからs2を挿入
			line.insert(begin, s2);
			//todo: 消す
			std::cout << line << std::endl;
		}
		lines.append(line);
		lines.push_back('\n');
	}
	in_file.close();

	return (lines);
}

void	writeOutputFile(std::string	file, std::string lines) {
	std::ofstream out_file((file + ".replace").c_str());
	if (!out_file.is_open()) {
		std::cout << "Error: Open failed." << std::endl;
		std::exit(EXIT_FAILURE);
	}
	out_file << lines;
	out_file.close();
}

int main(int argc, char *argv[])
{
	if (argc != 4) {
		std::cout << "The argument should be \"./filename string1 string2\"" << std::endl;
		std::exit(EXIT_FAILURE);
	}

	std::string lines = loadInputFile(argv[1], argv[2], argv[3]);
	writeOutputFile(argv[1], lines);
	return (EXIT_SUCCESS);
}
