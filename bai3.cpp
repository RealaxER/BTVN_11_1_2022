#include<iostream>
#include<math.h>
using namespace std;

int Tong_binh_phuong(int n)
{
	int s = 0;
	for(int i =1;i<=n;i++)
	{
		s = s + pow(i,2);
	}
	return s;
}

int main ()
{
	int n;
	cout <<"Nhap gia tri n: ";
	cin >>n;
	
	cout << "Tong binh phuong la : "<< Tong_binh_phuong(n);
}
