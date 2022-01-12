#include<iostream>
#include<math.h>
using namespace std;

int So_amstrong(int n)
{
	bool kiemtra;
	int temp = n;
	int sosanh = n;
	int k= 0; // demm
	int s = 0; // tong
	while(temp!=0)
	{
		temp = temp/10;
		k++;
	}
	while(n!=0)
	{
		temp = n % 10;
		n = n/10;
		s = s + pow(temp,k);
	}
	if(sosanh == s)
	{
		cout << sosanh << " la so amstrong";
	}
	else
	{
		cout << sosanh << " khong la so amstrong";
	}
}

//ham chinh
int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	So_amstrong(n);
	
	
}
