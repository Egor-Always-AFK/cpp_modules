#include <iostream>
#include <string>
#include <fstream>


std::string replacer(const std::string find, const std::string replace, std::string buff)
{
	int _find = find.length();
	int _replace = replace.length();
	int startPos = buff.find(find);
	while (startPos != -1)
	{
		buff.erase(startPos, _find);
		buff.insert(startPos, replace);
		startPos = buff.find(find, startPos + _replace);
	}
	return (buff);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error!\nInvalid number arg.\n";
		return (1);
	}
	else
	{
		const std::string filename = argv[1];
		const std::string find = argv[2];
		const std::string replace = argv[3];
		std::ifstream infile;
		std::ofstream outfile;

		infile.open(argv[1]);
		if (infile.is_open() == 1)
		{
			std::string tmp = filename;
			tmp.append(".replace");
			outfile.open(tmp.c_str());
			if (outfile.is_open())
			{
				while(std::getline(infile, tmp))
				{
					tmp = replacer(find, replace, tmp);
					outfile << tmp;
					if (infile.peek() != EOF)
						outfile << std::endl;
				}
				outfile.close();
			}
			else
			{
				infile.close();
				std::cout << "I can't open second file(so sad)\n";
				return (1);
			}
			infile.close();
		}
		else
		{
			std::cout << "Error!\nTroubles with file(so sad)\n";
			return (1);
		}
		// std::cout << "argv[1] " << filename << "\nargv[2] " << find << "\nargv[3] " << replace;
	}
	return (0);
}