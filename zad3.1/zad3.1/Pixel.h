#pragma once


class Pixel
{
public:
	Pixel();
	Pixel(int red, int green, int blue);
	void set_Pixel(int red, int green, int blue);
	void read_Pixel();

private:
	int red;
	int green;
	int blue;
};

