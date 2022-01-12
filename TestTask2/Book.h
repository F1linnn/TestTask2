#pragma once
#include"Edition.h"

class book : public edition
{
private:
	string author;
	string yearsOfLife;
public:
	void set_author(string name)
	{
		author = name;
	}

	string get_author()
	{
		return author;
	}

	void set_yearsOfLife(string start, string end) // start=1945, end=1978;
	{
		yearsOfLife = start;
		yearsOfLife += '-';
		yearsOfLife += end;
	}

	string get_yearsOfLife()
	{
		return yearsOfLife;
	}

};

