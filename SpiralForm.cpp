#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n][m];
	int l=0,k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
		}
	}
	while(k < n && l < m)
	{
		for(int i=l;i<m;i++)
		{
			cout << a[k][i] << " ";
		}k++;
		for(int i=k;i<n;i++)
		{
			cout << a[i][m-1] << " ";
		}m--;
		if(k<n)
		{
			for(int i=m-1;i>=l;i--)
			{
				cout << a[n-1][i] << " ";
			}
		}	n--;
		if(l<m)
		{
			for(int i=n-1;i>=k;i--)
			{
				cout << a[i][l] << " ";	
			}
			l++;
		}
	}
	return 0;
}
