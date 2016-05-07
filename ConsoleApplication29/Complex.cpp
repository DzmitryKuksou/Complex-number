#include<iostream>
#include"Complex.h"
using namespace std;
double Complex::Mod()
{
	return sqrt(re*re + im*im);
}
Complex Complex::operator -(Complex const&c)
{
	return Complex(this->re - c.re, this->im - c.im);
}
Complex Complex::operator*(Complex const&c)
{
	return Complex(this->re*c.re - this->im*c.im, this->re*c.im + c.re*this->im);
}
Complex Complex::operator/(Complex const&c)
{
	return Complex((this->re*c.re + this->im*c.im) / (c.re*c.re + c.im*c.im), (this->im*c.re - this->re*c.im) / (c.re*c.re + c.im*c.im));
}
Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}
double Complex::GetReal() 
{
	return re;
}
double Complex::GetImage() 
{
	return im;
}
Complex Complex:: operator +(Complex const& c) 
{
	return Complex(this->re + c.re,this->im + c.im);
}
Complex::~Complex()
{
	
}
void Complex::DisplayComplex()
{
	if (im >= 0)
	{
		cout << re << "+" << im << "i\n";
	}
	else cout << re << im << "i\n";
}