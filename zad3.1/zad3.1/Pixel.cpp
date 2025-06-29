#include"Pixel.h"
#include<iostream>

using namespace std;

Pixel::Pixel(){
	this->red = 0;
	this->green = 0;
	this->blue = 0;
}
Pixel::Pixel(int red, int green, int blue) {
	this->set_Pixel(red, green, blue);
}
void Pixel::set_Pixel(int red, int green, int blue){
	if (red >= 0 && red <= 256)
		this->red = red;
	else
		this->red = 0;

	if (green >= 0 && green <= 256)
		this->green = green;
	else
		this->green = 0;

	if (blue >= 0 && blue <= 256)
		this->blue = blue;
	else
		this->blue = 0;

}

void Pixel::read_Pixel(){
	int red, green, blue;
	cin >> red >> green >> blue;
}
