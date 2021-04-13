#pragma once
#include <iostream>
#include <string>

class Body
{
public:

	virtual void Read() = 0;
	virtual double Plos() = 0;
	virtual double Obj() = 0;
	virtual void Print() = 0;
};
