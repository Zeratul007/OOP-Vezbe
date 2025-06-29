#include "Date.h"

int main()
{
	Date* date = new Date(28, 2, 2000);

	date->next_Date();
	date->print_Date();

	//cout << date->leap_year_Date();

	return 0;
}