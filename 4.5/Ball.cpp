#include "Ball.h"
#include<iostream>	

using namespace std;

Ball::Ball()
	:a(0) {}

Ball::Ball(int a)
	: a(a) {}

double Ball::Plos()
{
	double S;
	S = 2.0 * (4.0 * (1.0 * getA() * getA()) * acos(-1.0));
	return S;
}

double Ball::Obj()
{
	double V;
	V = 2.0 * ((4.0 / 3.0) * acos(-1.0) * (1.0 * getA() * getA() * getA()));
	return V;
}

void Ball::Read()
{
	int a;
	cout << "Ball " << endl;
	cout << "Enter A : "; cin >> a;
	setA(a);
}
void Ball::Print()
{
	cout << "Plosha ball : " << Plos() << endl;
	cout << "Objem ball  : " << Obj() << endl << endl;
}