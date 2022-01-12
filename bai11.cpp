#include<iostream>
using namespace std;

int Ngay_vut_vo(int n, int m)
{

	int k =0;
	int a = 0;
	while (n!=0)
	{
	n = n -1;
	k++;
	a++;
		if(a == m) 
		{
		n++;
		a = 0;
		}
	}
	return k;

}
int main()
{
	int n,m;
	cout <<"Nhap n : ";
	cin >> n;
	cout <<"Nhap m : ";
	cin >> m;
	cout <<"So ngay vut het vo la : " << Ngay_vut_vo(n,m);
	return 0;
}
