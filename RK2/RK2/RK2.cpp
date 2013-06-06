// RK2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class computer
{
   protected:
	   int freq;
	   int RAM;
   public:
	   computer(){freq=0;RAM=0;};

	   computer (int f, int r)
	   {
		   freq = f;
		   RAM = r;
	   }
	   virtual void print()
	   {
		   cout<<"Frequency is"<<freq<<endl;
		   cout<<"RAM size is"<<RAM<<endl;
	   }

};

class mobilePC:public computer
{
	int size;
public:
	mobilePC(){};

	mobilePC(int f, int r, int s): computer(f,r)
	{
		size=s;
	}

	void print()
	{
		computer::print();
		cout<<"Size is"<<size<<endl;
	}
};





void main()
{
	computer p1(1024,4000);
	mobilePC p3(1024,4000,8000);
	computer *p2;
	p2=&p1;
	p2->print();
	p2=&p3;
	p2->print();


}

