#include "Phonebook.hpp"

void	welcome_to_phonebook(PhoneBook &obj)
{
	string cmd;

	cout << "Please Type Command:\n1-ADD\n2-SEARCH\n3-EXIT" << endl;
	getline(cin, cmd);
	if (cmd == "ADD")
		obj.add_contact();
    else if (cmd == "SEARCH")
		obj.search_contact();
    else if (cmd == "EXIT")
		exit(1);
    else
		cout << "Wrong Command! Please Retype.." << endl;
}

int main(void)
{
	PhoneBook obj;
	
	cout << "*/ WELCOME TO THE PHONEBOOK-V1.2 \\*\n" << endl;
	while (1)
		welcome_to_phonebook(obj);
	return (0);
}

