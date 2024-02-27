#include <bits/stdc++.h>
using namespace std;

int main(){

	size_t t;
	cin>>t;

	while(t--){
		int n, sum=0;
		cin>>n;

		for (int i = 1; i < n; ++i)
		{
			if(n%i == 0){
				sum += i;
			}
		}
		if(n == sum){
			cout<<n<<" eh perfeito"<<endl;
		}
		else{
			cout<<n<<" nao eh perfeito"<<endl;
		}
	}
	
	return 0;
}