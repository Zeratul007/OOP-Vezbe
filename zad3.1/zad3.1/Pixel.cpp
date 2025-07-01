#include"Pixel.h"


Pixel::Pixel(){
	this->R = 0;
	this->G = 0;
	this->B = 0;
}
Pixel::Pixel(unsigned char R, unsigned char G, unsigned char B) {
	this->set_Pixel(R, G, B);
}
void Pixel::set_Pixel(unsigned char R, unsigned char G, unsigned char  B){
	this->R = R;
	this->G = G;
	this->B = B;
}
unsigned char Pixel::get_Red(unsigned char R) {
	return R;
}
unsigned char Pixel::get_Green(unsigned char G) {
	return G;
}
unsigned char Pixel::get_Blue(unsigned char B) {
	return B;
}


void Pixel::read_Pixel(){
	unsigned char R, G, B;
	cin >> R >> G >> B;
}
