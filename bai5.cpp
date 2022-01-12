#include<iostream>
using namespace std;

int Uoc_so(int n)
{	
	int uocso;
	for(int i=1 ;i<=n;i++)
	{
		if(n%i==0)
		{
			uocso = i;
			cout << uocso <<" ";
		}
	}
	return uocso;
}

int main()
{
	int n;
	cout << "Nhap vao gia tri n : ";
	cin >> n;
	
	cout << "Cac uoc so la : ";
	Uoc_so(n);
	
}
