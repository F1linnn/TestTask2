#pragma once
#include"Library.h"
class librarian
{
	void putting_book(library &lib1) 
	{
		book buffer;
		int buff;
		bool flag = false;
		buffer=lib1.storage_book[lib1.storage_book.size()-1];
		lib1.storage_book.pop_back();
		string author_topic_buff = buffer.get_author();
		for (int i = 0; i<lib1.bookcases.size();i++)
			if (lib1.bookcases[i].topic && buff != 1)
			{
				if (author_topic_buff == lib1.bookcases[i].first.books[0].get_author())
					if(lib1.bookcases[i].first.put_on_book(buffer)==1);
				{buff = 1; flag = true;
					continue; }// ����� �� ����� for ���������
				
				if (author_topic_buff == lib1.bookcases[i].second.books[0].get_author())
					if (lib1.bookcases[i].second.put_on_book(buffer) == 1);
				{buff = 1; flag = true;
					continue; }// ����� �� ����� for ���������
					
				if (author_topic_buff == lib1.bookcases[i].third.books[0].get_author())
					if (lib1.bookcases[i].third.put_on_book(buffer) == 1);
				{buff = 1; flag = true;
					continue; }// ����� �� ����� for ���������
						
			}
		if (!flag)
		{
			for (int i = 0; i < lib1.bookcases.size(); i++)
			{
				if (lib1.bookcases[i].first.put_on_book(buffer) == 1);
				{buff = 1; flag = true;
				continue; }// ����� �� ����� for ���������
				
				if (lib1.bookcases[i].second.put_on_book(buffer) == 1);
				{buff = 1; flag = true;
				continue; }// ����� �� ����� for ���������
				if (lib1.bookcases[i].third.put_on_book(buffer) == 1);
				{buff = 1; flag = true;
				continue; }// ����� �� ����� for ���������
			}
		}
	}
	void putting_magazine(library& lib1);// ��� �������� ���������� ��� ��� ����


	void book_given_pot_on(library& lib1)// ���������� �������� ����� �� ����� � ����������� � �� �������
	{
		book in_hand = lib1.place.books_given[lib1.place.books_given.size()-1];
		lib1.place.books_given.pop_back();
		for (int i = 0; i < lib1.logbook_lib.books_taked.size(); i++)
		{
			book buff= lib1.logbook_lib.books_taked[i];
			if (in_hand.get_caption() == buff.get_caption())
			{
				lib1.logbook_lib.books_taked.erase(lib1.logbook_lib.books_taked.begin() + i);
			}
		}
		
		for (int i = 0; i < lib1.bookcases.size(); i++)
		{
			if (lib1.bookcases[i].first.put_on_book(in_hand) == 1);
			{continue; }// ����� �� ����� for ���������

			if (lib1.bookcases[i].second.put_on_book(in_hand) == 1);
			{continue; }// ����� �� ����� for ���������
			if (lib1.bookcases[i].third.put_on_book(in_hand) == 1);
			{continue; }// ����� �� ����� for ���������
		}

	}



 };