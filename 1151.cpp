#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n){

	if(n == 0 || n == 1){
		cout<<n<<" ";
		return ;
	}
	fibonacci(n-1);;

	cout<<n<<" ";
}

int main(){

	int n;
	cin>>n;

	fibonacci(n-1);
	
	return 0;
}