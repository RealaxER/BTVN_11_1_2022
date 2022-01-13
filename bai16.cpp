#include<iostream>
using namespace std;

void Fibonacci (int n)
{
	int a,x
	int b=1;
	int c=1;
	int i=0;
	
	while(int i < n)	
	{
		a = c;
		++i;
		if(i==n)
		{
			cout << "Gia tri cua F(n) : " << a;
		}
		else
		{
		++i;
		b = b+c;
			if(i==n)
			{
				cout << "Gia tri cua F(n) : " << b;
			}
		}
		c = a+b;
		if(i==n)
		{
			break;
		}
	}
	if(n==0)
	{
		cout << "Gia tri cua F(n) : " << 1;
	}
}

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >>n ;
	Fibonacci (n);
}

