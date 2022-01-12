#pragma once
#include"Library.h"
class reader
{
public:
	/*� ����� �� ����� ���� ������ 2-� ����� �������*/
	vector<book> in_hand;
	vector<magazine> in_hand;

	void search_author_book(library& lib1, string author)// ����� ����� �� ������ � ������ � �� ����������
	{
		for (int i = 0; i < lib1.bookcases.size(); i++)
		{
			for (int buff = 0; buff < lib1.bookcases[i].first.books.size(); buff++)
			{
				if (author == lib1.bookcases[i].first.books[buff].get_author())
				{
					if (in_hand.size() < 2)
					{
						in_hand.push_back(lib1.bookcases[i].first.books[buff]);
						lib1.logbook_lib.books_taked.push_back(lib1.bookcases[i].first.books[buff]);// �������� ����� � ������ ������
						lib1.bookcases[i].first.books.erase(lib1.bookcases[i].first.books.begin() + buff);
						buff--;
					}
				}
			}

			for (int buff = 0; buff < lib1.bookcases[i].second.books.size(); buff++)
			{
				if (author == lib1.bookcases[i].second.books[buff].get_author())
				{
					if (in_hand.size() < 2)
					{
						in_hand.push_back(lib1.bookcases[i].second.books[buff]);
						lib1.logbook_lib.books_taked.push_back(lib1.bookcases[i].second.books[buff]);// �������� ����� � ������ ������
						lib1.bookcases[i].second.books.erase(lib1.bookcases[i].second.books.begin() + buff);
						buff--;
					}
				}
			}

			for (int buff = 0; buff < lib1.bookcases[i].third.books.size(); buff++)
			{
				if (author == lib1.bookcases[i].third.books[buff].get_author())
				{
					if (in_hand.size() < 2)
					{
						in_hand.push_back(lib1.bookcases[i].third.books[buff]);
						lib1.logbook_lib.books_taked.push_back(lib1.bookcases[i].third.books[buff]);// �������� ����� � ������ ������
						lib1.bookcases[i].third.books.erase(lib1.bookcases[i].third.books.begin() + buff);
						buff--;
					}
				}
			}

		}
	}

	void search_yearslife_book(library& lib1, string yearslife);// ����� ����� �� ����� ����� ���������� ����� ��� � ����� �� ������ ������ ������ �������� ����������, ����� ����� ��������� � ������ ������ �������;
	void search_topic_magazine(library& lib1, string topic);// ����� ������� �� ����� ���������� ����� ��� � ����� �� ������ ������ ����� �������� ������� ���� ��� �� ������ ������, ����� ����� ��������� � ������ ������ �������;
	void search_year_book(library& lib1, int year);// ����� �����/������� �� ���� ������� ���������� ����� ��� � ����� �� ������ ������ ������ �������� ����������;


};