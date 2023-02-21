#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int	main(void)
{
	string brain = "HI THIS IS BRAIN";
	string* brain_ptr = &brain;
    string& brain_ref = brain;

	cout << &brain << endl;
	cout << brain_ptr << endl;
	cout << &brain_ref << endl;

    cout << brain << endl;
	cout << *brain_ptr << endl;
	cout << brain_ref << endl;
}



