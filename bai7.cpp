#include<iostream>
using namespace std;

int Cac_chu_so(int n)
{	
	int chuso=0;
	while(n!=0)
	{
		chuso = n%10;
		n = n/10;
		cout << chuso << " ";
	}
}
int main()
{
	int n;
	cout <<"Nhap n : ";
	cin >> n;
	
	cout << "Cac chu so la : ";
	Cac_chu_so(n);
	
}
