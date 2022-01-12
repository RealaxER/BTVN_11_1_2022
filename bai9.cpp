#include<iostream>
using namespace std;

float Tong(int n)
{
	float s = 0;
	for(int i = 1;i<=n;i++)
	{
		s = s + 1.0/i;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	
	cout <<"Tong cac phan so : "<< Tong(n);
}
