#pragma once
#ifndef PIXEL_H
#define	PIXEL_H

#include<iostream>
using namespace std;

class Pixel{

public:
	Pixel();
	Pixel(unsigned char R, unsigned char G, unsigned char B);
	void set_Pixel(unsigned char R, unsigned char G, unsigned char B);
	unsigned char get_Red(unsigned char R);
	unsigned char get_Green(unsigned char G);
	unsigned char get_Blue(unsigned char B);
	void read_Pixel();

private:
	unsigned char R, G, B;
	
};

#endif // PIXEL_HEADER



