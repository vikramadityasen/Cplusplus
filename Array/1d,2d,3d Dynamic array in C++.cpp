#include<iostream>
using namespace std;

class OneDimentional
{
private: 
	int iSize;
	int *p;
public:
	OneDimentional(int);
	OneDimentional(OneDimentional &);
	~OneDimentional();
	void Accept();
	void Display();
};

class TwoDimentional
{
private:
	int iRow,iCol;
	int **p;
public:
	TwoDimentional(int,int);
	TwoDimentional(TwoDimentional &);
	~TwoDimentional();
	void Accept();
	void Display();
};


int main()
{
	OneDimentional oobj1(3);
	oobj1.Accept();
	oobj1.Display();

    OneDimentional oobj2(oobj1);
	oobj2.Display();

	OneDimentional *optr= new OneDimentional(20);
	optr->Accept();
	optr->Display();
	delete optr;

	TwoDimentional tobj1(3,5);
	tobj1.Accept();

	TwoDimentional tobj2(tobj1);
	tobj2.Display();

	TwoDimentional tobj4(3);
	tobj4.Accept();
	tobj4.Display();
	
	return 0;
}

OneDimentional :: OneDimentional(int iLength=10)
{
	iSize=iLength;
	p=new int[iSize];
}

OneDimentional :: OneDimentional(OneDimentional &ref)
{
	this->iSize=ref.iSize;
	this->p=new int[iSize];
	for(int i=0;i<iSize;i++)
	{
		this->p[i]=ref.p[i];
	}
}
 
OneDimentional :: ~OneDimentional()
{
	delete []p;
}

void OneDimentional ::Accept()
{
	cout<<"Enter the "<<iSize<<" elements \n";
	for(int i=0;i<iSize;i++)
	{
		cin>>p[i];
	}
}

void OneDimentional ::Display()
{
	cout<<"Enterd elements are\n";
	for(int i=0;i<iSize;i++)
	{
		cout<< p[i] <<" ";
	}


}

TwoDimentional ::TwoDimentional(int iNo1=5,int iNo2=5)
{
	iRow=iNo1;
	iCol=iNo2;
	p=new int*[iRow];
	for(int i=0;i<iRow;i++)
	{
		p[i]=new int[iCol];
	}
}

TwoDimentional ::TwoDimentional(TwoDimentional &ref)
{
	this->iRow=ref.iRow;
	this->iCol=ref.iCol;
	this->p=new int*[iRow];

	for(int i=0;i<iRow;i++)
	{
		this->p[i]=new int[iCol];
	}
	for(int i=0;i<iRow;i++)
	{
		for(int j=0;j<iCol;j++)
		{
		this->p[i][j]=ref.p[i][j];
		}
	}
}

TwoDimentional ::~TwoDimentional()
{
	int i = 0;
	for(i=0;i<iRow;i++)
	{
		delete []p[i];
	}
	delete []p;
}

void TwoDimentional::Accept()
{
	cout<<"Enter elements in 2D array\n";
	for(int i=0;i<iRow;i++)
	{
		for(int j=0;j<iCol;j++)
		{
			cin>>p[i][j];
		}
	}
}

void TwoDimentional ::Display()
{
	cout<<"Elements in 2D array are\n";
	for(int i=0;i<iRow;i++)
	{
		cout<<"\n";
		for(int j=0;j<iCol;j++)
		{
			cout<<p[i][j];
		}
	}
}

