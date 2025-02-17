#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	int n;
	double sum = 0;
	cin >> n;
	for(int i = 0; i<=n; i++)
	{
		sum += (2.0 * i + 1) / (2 * i +2);
	}
	cout << sum << endl;
	return 0;
}
