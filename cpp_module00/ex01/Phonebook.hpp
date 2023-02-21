#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class	Contact
{
private:
	int		index;
    string	first_name;
    string	last_name;
	string	nick_name;
    string	phone_number;
    string 	darkest_secret;
public:
	void	set_first_name(string str)
	{
		first_name = str;
	}
	void	set_last_name(string str)
	{
		last_name = str;
	}
	void	set_nick_name(string str)
	{
		nick_name = str;
	}
	void	set_phone_number(string str)
	{
		phone_number = str;
	}
	void	set_darkest_secret(string str)
	{
		darkest_secret = str;
	}
	void	set_index(int idx)
	{
		index = idx;
	}
    string	get_first_name(){ return (first_name);};
    string	get_last_name(){ return(last_name);};
    string	get_nick_name(){ return (nick_name);};
    string	get_phone_number(){return(phone_number);};
    string	get_darkest_secret(){return (darkest_secret);};
    int		get_index(){return(index);};
};

class PhoneBook
{
public:

	void	add_contact();
	void	search_contact();

	PhoneBook()
	{
		add_cnt = 0;
	};
	Contact& get_contact(int index)
	{
		return (contact[index]);
	} 
private:

	Contact contact[8];
	int		add_cnt;
};

bool	isNumber(string nbr);
void	display_contact(PhoneBook *ph, int i);
void	display_detail(PhoneBook *ph, int i);

#endif