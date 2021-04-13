#pragma once
#include"Ball.h"

using namespace std;

class Parallelepiped : public Ball
{
private:
	int b, c;
public:
	Parallelepiped();
	Parallelepiped(int a, int b, int c);
	void setB(int b) { this->b = b; }
	int getB() const { return b; }
	void setC(int c) { this->c = c; }
	int getC() const { return c; }

	virtual double Plos();
	virtual double Obj();
	virtual void Read();
	virtual void Print();
};
