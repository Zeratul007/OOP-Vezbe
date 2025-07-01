#pragma once
#pragma once
#ifndef IMAGE_H
#define IMAGE_H

#include "Pixel.h"

class Image {
public:
	Image();
private:
	Pixel*** pixels;
	int height, width;


};


#endif // !IMAGE_HEADER
