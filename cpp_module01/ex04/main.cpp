#include "Losers.hpp"

int	Fexit(string s)
{
	cout << s << endl;
	return (-1);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		ifstream inFile(av[1]);
		string	first = (string)av[1];
        string	second = (string)av[2];
		size_t	find;
		string	line;
		
		if (!inFile.is_open())
			return (Fexit("We can't find that file"));
		inFile.seekg(0, std::ios::end);
		if (inFile.tellg() == 0)
			return (Fexit("file is empty"));
		inFile.seekg(0, std::ios::beg);
		ofstream outFile(first + ".replace");
        while (getline(inFile, line))
	    {
			while (line.find(second) != std::string::npos)
			{
				find = line.find(second);
				line.erase(find, second.length());
				line.insert(find, av[3]);
			}
			outFile << line << endl;
			//.replace içine yaz 
				//değiştirme işlemi yapacağız
			//outFile dosyasına atma işlemi
	    }
    }
}
