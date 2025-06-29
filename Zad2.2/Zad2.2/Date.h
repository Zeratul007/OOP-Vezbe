#pragma once

#include<iostream>
using namespace std;

class Date {
public:

	Date(int day, int month, int year);
	
	void set_Date(int day, int month, int year);
	void print_Date(); 
	bool leap_year_Date();
	void next_Date();

private:
	int day, month, year;

};
