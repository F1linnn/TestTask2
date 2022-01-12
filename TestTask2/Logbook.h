#pragma once
#include"Book.h"
#include"Magazine.h"
class logbook
{
public:
	vector<book> books_taked;
	vector<magazine> magazines_taked;
};

class place_for_given_edition
{
public:
	vector<book> books_given;
	vector<magazine> magazines_given;
};