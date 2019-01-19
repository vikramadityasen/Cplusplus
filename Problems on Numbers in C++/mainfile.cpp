
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
typedef int BOOL;
class Number
{
protected:
int iNo;
public:
	Number(Number &);
Number();
Number(int);
inline void Accept();
inline void Display();
void DisplayFactors();
int SumFactor();
int Factorial();
};
Number::Number(Number &ref)
{
	this->iNo=ref.iNo;
}
class AdvNumber : public Number
{
public:
AdvNumber(int value):Number(value)
{
}
BOOL ChkPerfect();
BOOL ChkPrime();
};
Number::Number()
{
//this->iNo = iValue;
}
Number::Number(int iValue=1)
{
this->iNo = iValue;
}
void Number::Accept()
{
cout<<"Enter number";
cin>>iNo;
}
void Number::Display()
{
cout<<"\nNumber is : "<<iNo<<"\n";
}
void Number::DisplayFactors()
{
cout<<"\n";
for(int i= 1; i<=(iNo/2); i++)
{
if((iNo%i) == 0)
{
cout<<i<<"\t";
}
}
cout<<"\n";
}
int Number::SumFactor()
{
int iSum = 0;
for(int i= 1; i<=(iNo/2); i++)
{
if((iNo%i) == 0)
{
iSum= iSum + i;
}
}
return iSum;
}
int Number::Factorial()
{
int iFact = 1;
for(int i = 1; i<=iNo; i++)
{
iFact= iFact * i;
}
return iFact;
}
BOOL AdvNumber::ChkPerfect()
{
int iSum = SumFactor();
if(iSum == iNo)
{
return TRUE;
}
else
{
return FALSE;
}
}
BOOL AdvNumber::ChkPrime()
{
int i = 0;
for(i = 2; i<= (iNo /2); i++)
{
if((iNo % i) == 0)
{
break;
}
}
if(i > (iNo / 2))
{
return TRUE;
}
else
{
return FALSE;
}
}
int main()
{
Number obj1;

obj1.Accept();
obj1.DisplayFactors();
cout<<"\nAddition of factors is : "<<obj1.SumFactor();
obj1.Display();
AdvNumber obj2(0);
Number obj22(obj2);
obj1.Accept();
if(obj2.ChkPerfect())
{
cout<<"It is perfect\n";
}
else
{
cout<<"It is not perfect\n";
}
if(obj2.ChkPrime())
{
cout<<"It is prime\n";
}
else
{
cout<<"It is not prime\n";
}
return 0;
}