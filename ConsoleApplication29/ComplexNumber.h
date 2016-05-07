class Complex
{
public:
	Complex();
	Complex(double, double);
	double Mod();
	Complex operator +(Complex const &c);
	Complex operator -(Complex const &c);
	Complex operator *(Complex const &c);
	Complex operator /(Complex const &c);
	void DisplayComplex();
	double GetReal();
	double GetImage();
	~Complex();
private:
	double re, im;
};