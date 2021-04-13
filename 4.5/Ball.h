#pragma once
#include"Body.h"

class Ball : public Body
{
private:
	int a;
public:
	Ball();
	Ball(int a);
	void setA(int a) { this->a = a; }
	int getA() const { return a; }
	virtual double Plos();
	virtual double Obj();
	virtual void Read();
	virtual void Print();
};