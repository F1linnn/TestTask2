#pragma once
#include"Shelf.h"
class bookcase
{
private:
	
	void yes_or_no_topic(bool tr)// будет шкаф тематическим или нет;
	{

		string buff_name;
		if (tr)
		{
			buff_name = first.books[0].get_author();
			for (int i = 0; i < first.books.size(); i++)
			{
				if (buff_name != first.books[i].get_author())
				{
					first.books.erase(first.books.begin() + i);
				}
			}

			for (int i = 0; i < second.books.size(); i++)
			{
				if (buff_name != second.books[i].get_author())
				{
					second.books.erase(second.books.begin() + i);
				}
			}
			for (int i = 0; i < third.books.size(); i++)
			{
				if (buff_name != third.books[i].get_author())
				{
					third.books.erase(third.books.begin() + i);
				}
			}

			first.clear_place();


			second.clear_place();


			third.clear_place();

			topic = true;
		}
	}
public:
	bool topic = false;
	/*Всего 3-ри полки в шкафу*/
	shelf first;
	shelf second;
	shelf third;
	
	friend class admin;
};