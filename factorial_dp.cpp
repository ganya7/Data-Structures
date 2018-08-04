#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll term[1000] = {0};
ll factorial_dp(int n){
	if(n <= 1)
		term[n] = n;
	if(term[n] == 0)
		term[n] = n * factorial_dp(n-1);
	return term[n];
}
int main(){
	int n;
	cin>>n;
	cout<<factorial_dp(n);
	cin>>n;
	cout<<factorial_dp(n);
	return 0;
}