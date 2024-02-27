#include <bits/stdc++.h>
using namespace std;

int main(){

	int n = 1, i=0,sum=0;

	while(true){
		cin >> n;
		if(n < 0) break;
		sum += n;
		i++;
	}
	cout<<fixed<<setprecision(2);
	cout<<(float)sum/i<<endl;
	
	return 0;
}