#include<iostream>
using namespace std;

int Cac_chu_so_chan(int n)
{	
	int chuso=0;
	while(n!=0)
	{
		chuso = n%10;
		n = n/10;
		if(chuso%2==0)
		{
		cout << chuso << " ";
		}
	}
}
int main()
{
	int n;
	cout <<"Nhap n : ";
	cin >> n;
	
	cout << "Cac chu so chan la : ";
	Cac_chu_so_chan(n);
	
}
