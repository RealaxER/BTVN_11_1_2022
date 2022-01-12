#include<iostream>
using namespace std;

int Tong_tich(int n)
{
	int s = 1;
	for(int i = 1;i<=n;i++)
	{
		s = s*i;
	}
	if(n==0)
	{
		s = 0;
	}
	return s;
}

int main ()
{
	int n;
	cout <<"Nhap n: ";
	cin >> n;
	
	cout <<"Tong tich la : " <<Tong_tich(n);
	return 0;
}
