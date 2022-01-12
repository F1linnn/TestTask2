#pragma once
#include"Edition.h"


class magazine : public edition
{
private:
	string releaseDate;// дата написания
	vector<string> topics;// темы журнала
public:
	void set_releaseDate(string date)
	{
		releaseDate = date;
	}
	string get_releaseDate()
	{
		return releaseDate;
	}

	void set_topics()
	{
		for (int i = 0; i < text.size(); i++)
		{
			topics.push_back("topic " + to_string(i));
		}
	}

};