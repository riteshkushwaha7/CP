#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int maxn = 1e6+10;
const LL mod = 1e9+7;
 
int n;
char a[1010];
 
int main()
{
	int i , j;
	cin >> a;
	n = strlen(a);
	j = 0;
	for (i = 1 ; i < n ; i++)
		j |= (a[i]-'0');
	cout << (n+j)/2 << "\n";
	return 0;
}