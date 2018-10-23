#include<iostream>
using namespace std;

class StringX
{
public:
	char arr[100];

	

	StringX(char str[]="Bhagwat")
	{
		int i=0;
		while(str[i]!='\0')
		{
			arr[i]=str[i];
			i++;
		}
		arr[i]='\0';
	}

	

	~StringX()
	{
		cout<<"inside Distructor"<<endl;
	}

	StringX operator +(StringX &second)
	{
		cout<<"Inside Binary + operator\n";
		
		int i=0;
		int j=0;
		while(arr[i]!='\0')
		{
			i++;
		}
		while(second.arr[j]!='\0')
		{
			arr[i]=second.arr[j];
			i++;
			j++;
		}
		
		arr[i]='\0';
		return (arr);
	}


};

int main()
{
	int i=0;
	StringX obj1;
	cout<<"Enter sring one";
	scanf("%[^'\n']s",obj1.arr);
	cout<<obj1.arr<<endl;
	StringX obj2;
	cout<<obj2.arr<<endl;
	StringX obj3;
	obj3 = obj1 + obj2;
	cout<<"string in obj3 is"<<obj3.arr<<endl;
	cout<<endl;
	return 0;
}

/*Enter sring onejay
jay
Bhagwat
Inside Binary + operator
inside Distructor
string in obj3 isjayBhagwat

inside Distructor
inside Distructor
inside Distructor
Press any key to continue . . .
*/