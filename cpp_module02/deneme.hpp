#include <iostream>
using namespace std;

class deneme
{
	public:
		deneme(int x = 21);
        deneme(double y = 2.5)
		{
			cout << "double" << endl;
		};
		~deneme(){};
		deneme(const deneme& oth);
		void	operator=(deneme oth);
		void 	operator++(int);
		int	x;
};

deneme::deneme(int x)
{
	this->x = x;
	cout << "constructor worked" << endl;
}

deneme::deneme(const deneme& oth)
{
	x = oth.x;
	cout << "Copy construcotr worked" << endl;
}

void	deneme::operator=(deneme oth)
{
	this->x = oth.x;
	cout << "operator worked" << endl;
}

void 	deneme::operator++(int)
{
	this->x = x + 1;

}