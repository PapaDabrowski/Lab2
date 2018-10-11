//Created and edited by Piotr Dąbrowski
#pragma once
#include <ostream>

class Complex
{
private:
double real_;
double imag_;
public:
Complex();
Complex(double,double);
Complex(const Complex&);
Complex operator*(Complex&);
Complex operator*(int);
Complex operator*=(Complex&);
Complex operator^(int);
Complex& operator=(const Complex& );
Complex operator+(const Complex&);
bool operator==(const Complex&);
friend std::ostream& operator<<(std::ostream &,const Complex&);
friend Complex operator*(const int,const Complex&);
};
