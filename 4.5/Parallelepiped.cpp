#include "Parallelepiped.h"
#include<iostream>	

using namespace std;

Parallelepiped::Parallelepiped()
	:Ball(), b(0), c(0) {}

Parallelepiped::Parallelepiped(int a, int b, int c)
	: Ball(a), b(b), c(c) {}

double Parallelepiped::Plos()
{
	double S;
	S = 2.0 * (1.0 * getA() * getB() + 1.0 * getA() * getC() + 1.0 * getB() * getC());
	return S;
}

double Parallelepiped::Obj()
{
	double V;
	V = (1.0 * getA() * getB() * getC());
	return V;
}

void Parallelepiped::Read()
{
	int a, b, c;
	cout << "Parallelepiped " << endl;
	cout << "Enter A : "; cin >> a;
	cout << "Enter B : "; cin >> b;
	cout << "Enter C : "; cin >> c;
	setA(a), setB(b), setC(c);
}

void Parallelepiped::Print()
{
	cout << "Plosha parallelepiped : " << Plos() << endl;
	cout << "Objem parallelepiped  : " << Obj() << endl << endl;
}
