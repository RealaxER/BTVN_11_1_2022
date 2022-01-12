#include<iostream>
using namespace std;


int Tong_uoc_so(int n)
{	
	int s = 0;
	for(int i=1 ;i<=n;i++)
	{
		if(n%i==0)
		{
			s = s+i;
		}
	}
	return s;
}

int main()
{
	int n;
	cout <<"Nhap n : ";
	cin >> n;
	
	cout << "Gia tri tong so uoc la: " << Tong_uoc_so(n);
}
