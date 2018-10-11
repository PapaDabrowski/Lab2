//Created and edited by Piotr Dąbrowski
#include <iostream>
#include <cmath>
#include <string>
#include <ostream>
#include "Complex.h"
using namespace std;


int main()
{
Complex c2,c3,c4,c5;
c2=c3+c4+c3+c5;
Complex siemka(5,5);
Complex niesiemka(5,5);
Complex witam(1,2);
Complex dziala(niesiemka);
cout<<dziala;
cout<<witam;
cout<<3*witam;
cout<<2*Complex(1,2)+Complex(-3,5)*3<<endl;
}
