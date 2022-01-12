#pragma once
#include<string>
#include<vector>
using namespace std;
class edition
{
private:
	string nameEdition;
	string caption;
	int year;
public:
	vector<string> text;
	void set_nameEdition(string name)
	{
		nameEdition = name;
	}
	string get_nameEdition()
	{
		return nameEdition;
	}

	void set_caption(string caption)
	{
		this->caption = caption;
	}

	string get_caption()
	{
		return caption;
	}

	void set_year(int num)
	{
		year = num;
	}
	int get_year()
	{
		return year;
	}

	void set_text(string info) // текст пишетс€ так называемыми "абзацами" €чейками векторов.(необходимо так делать дл€ журнала);
	{
		text.push_back(info);
	}
	string get_text(int num)
	{
		return text[num];
	}

};
