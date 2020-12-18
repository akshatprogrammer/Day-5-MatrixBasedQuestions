#include<iostream>
using namespace std;
int main()
{
	int n,m,p,q;
	cin >> m >> n;
	cin >> p >> q;
	if(n != p)
	{
		cout << "It cannot be Multiplied\n";
		exit(1);
	}
	int a[m][n],b[p][q];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			cin >> b[i][j];
		}
	}
	int prod[m][p];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			prod[i][j]=0;
			for(int k=0;k<n;k++)
			{
				prod[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			cout << prod[i][j] << " ";
		}cout << endl;
	}
}
