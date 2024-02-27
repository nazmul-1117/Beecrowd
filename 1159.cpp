#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(true){
		cin>>n;
		if(!n) break;
		if(n&1) n++;

		int sum = 0;
		for (int i = 0; i < 5; ++i){
			sum += n;
			n += 2;
		}
		cout<<sum<<endl;
	}
	return 0;
}