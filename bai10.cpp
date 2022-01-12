#include<iostream>
using namespace std;

float Tong_so_le(int n)
{
	float s=0;
	for(int i = 0;i<=n;i++)
	{
		s = s + 1.0/(2*i+1);
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	
	cout <<"Tong cac phan so : "<< Tong_so_le(n);
}
