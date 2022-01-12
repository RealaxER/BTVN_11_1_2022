#include<iostream>
using namespace std;

int Tong_so_nguyen(int n)
{
	int s =0;
	for(int i = 0;i<=n;i++)
	{
		s = s+i;
	}
	return s;
}
int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	
	cout <<"Tong la : "<< Tong_so_nguyen(n);
}
