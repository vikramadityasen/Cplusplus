#include<iostream>

using namespace std;
#define pi 3.14

class Circle
{
private:
	 float radius;

public:
	void Accept();
	void Display();
	void Area();
	void Circumference();
};



void Circle :: Accept()
{
	cout<<"Enter the radius of the circle"<<endl;
	cin>>this->radius;
}

void Circle :: Display()
{
	cout<<"Radius is = "<<radius;
}

void Circle :: Area()
{
	float iret=0.0f;
	iret=pi *( radius *radius);
	cout<<"area of circle is :"<<iret<<endl;
}

void Circle :: Circumference()
{
	float iret=0.0f;
	iret=pi * radius *2;
	cout<<"Circumference is:"<<iret<<endl;
}

int main()
{
	Circle obj1;
	obj1.Accept();
	obj1.Display();
	obj1.Area();
	obj1.Circumference();

	return 0;
}