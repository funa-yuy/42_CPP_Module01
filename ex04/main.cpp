#include<iostream>
#include<string>
#include <cstdlib>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
		std::cout << "The argument should be \"./filename string1 string2\"" << std::endl;

	//todo: 存在しない場合のエラー処理
	std::fstream in_file(argv[1]);  // 読み込むファイルのパスを指定
	std::string	file = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string line;
	std::string lines;

	while (std::getline(in_file, line)) {  // 1行ずつ読み込む
		size_t begin = line.find(s1);
		if (begin != std::string::npos)
		{
			// lineのうち、beginからs1.size()削除
			line.erase(begin, s1.size());
			// lineのうち、beginからs2を挿入
			line.insert(begin, s2);
			std::cout << line << std::endl;
		}
		lines.append(line);
		lines.push_back('\n');
	}
	in_file.close();

	std::ofstream out_file((file + ".replace").c_str());
	out_file << lines;
	out_file.close();

	return (EXIT_SUCCESS);
}
