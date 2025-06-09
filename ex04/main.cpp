#include<iostream>
#include<string>
#include <cstdlib>
#include <fstream>

std::string	replaceLine(std::string& line, const std::string s1, const std::string s2) {
	size_t pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos) {
		// lineのうち、posからs1.length()削除
		line.erase(pos, s1.length());
		// lineのうち、posからs2を挿入
		line.insert(pos, s2);
		pos += s2.length();
	}
	return (line);
}

std::string	loadInputFile(char *file, const std::string s1, const std::string s2) {
	std::string line;
	std::string lines;

	if (s1.empty()) {
		std::cerr << "Error: s1 must not be empty\n";
		std::exit(EXIT_FAILURE);
	}
	std::fstream in_file(file);  // 読み込むファイルのパスを指定
	if (!in_file.is_open()) {
		std::cout << "Error: Open failed." << std::endl;
		std::exit(EXIT_FAILURE);
	}

	while (std::getline(in_file, line)) {  // 1行ずつ読み込む
		line = replaceLine(line, s1, s2);
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

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Error: The argument should be \"./filename string1 string2\"" << std::endl;
		std::exit(EXIT_FAILURE);
	}

	std::string lines = loadInputFile(argv[1], argv[2], argv[3]);
	writeOutputFile(argv[1], lines);
	return (EXIT_SUCCESS);
}
