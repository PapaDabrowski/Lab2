//Created and edited by Piotr Dąbrowski
#include <iostream>
#include "Complex.h"
#include <string>
#include <ostream>
using namespace std;

Complex::Complex()
{
real_=1.0; imag_=0.0;
cout<<"Default Constructor"<<endl;
}

Complex::Complex(double re, double im)
{
  real_=re;
  imag_=im;
}

Complex::Complex(const Complex& anotherComplex)
{
if(this!=&anotherComplex)
  {
  real_=anotherComplex.real_;
  imag_=anotherComplex.imag_;
  }
}

Complex Complex::operator*(Complex& X)
{
  return Complex(real_=X.real_*real_-imag_*X.imag_, imag_=(X.imag_*real_ + imag_*X.real_));
}

Complex Complex::operator*=(Complex& X)
{
double a=X.real_*real_ - imag_*X.imag_;
double b=X.imag_*real_ + imag_*X.real_;
real_=a;
imag_=b;
}

bool Complex::operator==(const Complex& X)
{
  if((real_==X.real_) &&(imag_==X.imag_))
     return true;
  else return false;
}

Complex& Complex::operator=(const Complex& anotherComplex)
{
  if(this!=&anotherComplex)
  {
  real_=anotherComplex.real_;
  imag_=anotherComplex.imag_;
  }
  cout<<"Przypisano"<<endl;
  return *this;
}

Complex Complex::operator+(const Complex& anotherComplex)
{
return Complex(real_+anotherComplex.real_,imag_+anotherComplex.imag_);
}

std::ostream& operator<<(std::ostream & os,const Complex& X)
{
os<<"Liczba Z= "<<X.real_<<"+ j"<<X.imag_<<endl;
return os;
}

Complex Complex::operator*(int X)
{
   return Complex(X*real_,X*imag_);
}

Complex operator*(const int X,const Complex& another)
{
	return Complex(X*another.real_,X*another.imag_);
}




