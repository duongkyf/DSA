#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main(){
	int n;
	int sum = 0;
	cin >> n;
	for(int i =1; i<=n; i++){
		if(i%2 == 1){
			sum += i;
		}
		else
			sum -= i;
	}
	cout << sum << endl;
	return 0;
}
