#include <iostream>	
#include "Ball.h"
#include "Parallelepiped.h"

using namespace std;

int main()
{
	Ball a;
	a.Read();
	a.Print();

	Parallelepiped b;
	b.Read();
	b.Print();

	Body* A = new Ball();
	Body* B = new Parallelepiped();


	cout << typeid(A).name() << endl;
	cout << typeid(*A).name() << endl;
	cout << typeid(B).name() << endl;
	cout << typeid(*A).name() << endl << endl;

	Body* N[2];
	N[0] = &a;
	N[1] = &b;
	N[0]->Print();
	N[1]->Print();

	return 0;

}