#include<iostream>
using namespace std;

int So_chan(int n)
{
	int Sochan;
	for(int i =1;i<=n;i++)
	{
		if(i%2==0)
		{
			Sochan = i;
			cout << Sochan << "  ";
		}
	}
	return Sochan;
}
int main()
{
	int n;
	cout <<"Nhap vao so n : ";
	cin >> n;
	cout << "Cac so chan la : "
	So_chan(n);
}


