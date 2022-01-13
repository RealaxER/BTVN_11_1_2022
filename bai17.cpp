#include<iostream>
using namespace std;

void Tam_giac(int h)
{
	int k =0;
	for(int i=0;i<h;i++)
	{	
	
		for(int j=1;j<h-i;j++)
		{
			cout <<" ";
		}
		k = 2*i + 1;
		for(k = 1;k<=2*i+1;k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int h;
	cout << "Nhap h : ";
	cin >> h;
	Tam_giac(h);
}
