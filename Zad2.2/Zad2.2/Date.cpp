#include "Date.h"

Date::Date(int day, int month, int year){
	this->set_Date(day, month, year);
}

void Date::set_Date(int day, int month, int year){
	int max_days_in_month = -1;
	
	this->year = year;
	
	if (month == 2)
		max_days_in_month = (this->leap_year_Date()) ? 29 : 28;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		max_days_in_month = 31;
	if (month == 4 || month == 6 || month == 9 || month == 11)
		max_days_in_month = 30;
	if (month < 1 || month > 12)
		max_days_in_month = -1;

	if (day > 0 && day <= max_days_in_month) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	else{
		this->day = 1;
		this->month = 1;
		this->year = 2001;
	}

	
}

void Date::print_Date(){
	cout << "Date: " << this->day << ". " << this->month << ". " << this->year << ".";
}

bool Date::leap_year_Date(){
	if ((!(this->year % 4) && this->year % 100) || !(this->year % 400)) //leap_year_condition
		return true;
	return false;
}

void Date::next_Date(){
	int max_days_in_month = 0;
	if (month == 2)
		max_days_in_month = (this->leap_year_Date()) ? 29 : 28;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		max_days_in_month = 31;
	if (month == 4 || month == 6 || month == 9 || month == 11)
		max_days_in_month = 30;
	
	if (this->day == max_days_in_month) {
		this->day = 1;
		this->month++;
	}
	else
		this->day++;

	if (this->month == 13){
		this->month = 1;
		this->year++;
	}
}
