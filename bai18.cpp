#include<iostream>
using namespace std;

void Tam_giac_rong(int h)
{
	char m = 42;
	int	j =h;
	
	for(int x=0;x<h;x++)
	{	
		j = h -x;
		for(j;j>0;j--)
		{
		cout << " ";
		}
		i= 2*x +1;
		for(int a=1;a<=i;a++)
		{
		if(x != h-1)
		{
			if(a==1)
			{
				cout <<m;	
			}
			else if(a==i)
			{
				cout <<m;	
			}
			else
			{
				cout <<" ";	
			}
		}
		else
		{
			cout <<m;	
		}
		}
		cout << endl;
	}
}

int main()
{
	int h  
	cout << "Nhap h : ";
	cin >> h;
	Tam_giac_rong(h);
	
}
