#include<iostream>
using namespace std;

bool So_nguyen_to (int n)
{
	bool kiemtra;
	if((n==2)||(n==3))
	{
		kiemtra = true;
	}
	else if((n/2==0)||(n/3==0) && (n!=2)&&(n!=3))
		{
			kiemtra = false;
		}
	else
	{
		kiemtra = true;
	}
	if(kiemtra ==true)
	{
		cout << "So do la so nguyen to";
	}
	else
	{
	cout << "Do khong la so nguyen to";
	}
	return kiemtra;
}

//ham chinh
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	So_nguyen_to (n);
}

