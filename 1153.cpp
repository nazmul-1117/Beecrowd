#include <bits/stdc++.h>
#define lld long long int
using namespace std;

lld factorial(int n){
	if(n <= 1){
		return 1;
	}
	return n*factorial(n-1);
}

int main(){

	int n;
	cin>>n;
	lld a= factorial(n);
	cout<<a<<endl;
	
	return 0;
}