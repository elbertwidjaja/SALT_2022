#include <bits/stdc++.h>

using namespace std;

int n;

int main() 
{
	cin >> n;
	int h[n];
	int maxi = 0;
	int count = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin >> h[i];
		if(h[i] > maxi)
		{
			maxi = h[i];
			count = 1;
		}
		else if (h[i] == maxi)
		{
			count++;
		}
	}
	cout << count;

	return 0;
}

