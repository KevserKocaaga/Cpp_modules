#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::string;

class Harl
{
	public:
		void	compline(string str);
	private:
		 void	debug(void);
		 void	info(void);
		 void	warning(void);
		 void	error(void);
};