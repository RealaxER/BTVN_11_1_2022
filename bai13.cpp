#include<iostream>
#include<math.h>
using namespace std;

bool So_doi_xung (int n)
{
	bool kiemtra;
	if(n<10)
	{
		kiemtra = true;
	}
	else
	{
	int temp = n;
	int k = 0; //dem
	
	while(temp!=0)
	{
		temp = temp/10;
		k++;
	}
	
	int phai = n %10;
	int trai = n /pow(10,k-1);
		if(phai == trai)
		{
			kiemtra = false;
		}
		else 
		{
			kiemtra = true;
		}
	}
	
		if(kiemtra == true)
		{
			cout << n << " khong la so doi xung";
		}
		else
		{
			cout << n << " la so doi xung";
		}
		
	return kiemtra;
}
// ham chinh 
int main()
{
	int n;
	bool kiemtra;
	cout << "Nhap n : ";
	cin >> n;
	So_doi_xung (n);
}
