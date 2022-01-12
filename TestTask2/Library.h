#pragma once
#include"Bookcase.h"
#include"Librarian.h"
#include"Logbook.h"
class library
{
public:
	vector<bookcase> bookcases;

	void set_library_name(string name)
	{
		library_name = name;
	}

	void set_address(string str)
	{
		address = str;
	}
	logbook logbook_lib;
	place_for_given_edition place;
private:
	string library_name;
	string address;
	vector<book> storage_book;
	vector<magazine> storage_magazine;
	vector<librarian> lib_director;
	void buy_bookcases(int amount)
	{
		for (int i = 0; i <= amount; i++)
		{
			bookcase libcase;
			bookcases.push_back(libcase);
		}
	}

	void sell_bookcase( int numbercase)
	{
		bookcases.erase(bookcases.begin() + numbercase);
	}
	
	
	

	friend class admin;
	friend class librarian;
};

