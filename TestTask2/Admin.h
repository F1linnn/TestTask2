#pragma once
#include "Library.h"
class admin
{
public:
	void buy_new_cases(library &lib1, int amount)// покупка новых шкафов
	{
		lib1.buy_bookcases(amount);
	}

	void sell_case(library& lib1, int numbercase)// продажа шкафа
	{
		lib1.sell_bookcase(numbercase);
	}

	void topic(library& lib1, bool true_or_false, int numcase)
	{
		lib1.bookcases[numcase].yes_or_no_topic(true_or_false);
	}
	//???
	void appoint_as(library& lib1, librarian lib_director1)
	{
		lib1.lib_director.push_back(lib_director1);
	}

	void dismiss(library& lib1)
	{
		lib1.lib_director.pop_back();
	}
	//?????
	void buy_book(library& lib1, string author, string caption, string nameEdition, int year, string yearstartlife, string yearendlife)
	{
		book book1;
		book1.set_author(author);
		book1.set_caption(caption);
		book1.set_nameEdition(nameEdition);
		book1.set_year(year);
		book1.set_yearsOfLife(yearstartlife, yearendlife);
		lib1.storage_book.push_back(book1);
	}

	void buy_magazine(library& lib1, string release, string caption, string nameEdition, int year, string yearstartlife, string yearendlife)
	{
		magazine mag1;
		mag1.set_caption(caption);
		mag1.set_nameEdition(nameEdition);
		mag1.set_releaseDate(release);
		mag1.set_year(year);
		lib1.storage_magazine.push_back(mag1);
	}

};