#pragma once
#include"Magazine.h"
#include"Book.h"
#include"Edition.h"

class shelf
{
private:
	int amount=0;
	int put_on_book(book book1)
	{
		if (amount < 7)
		{
			books.push_back(book1);
			amount++;
			return 1;
		}
		else
			return -1;
	}

	int put_on_magazine(magazine mag1)
	{
		if (amount < 7)
		{
			magazines.push_back(mag1);
			amount++;
			return 1;
		}
		else
			return -1;
	}
public:
	vector<magazine> magazines;
	vector<book> books;

	

	void clear_place()
	{
		amount = amount - magazines.size();
		magazines.clear();
	}

	friend class librarian;
};