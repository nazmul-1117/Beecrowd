#include <bits/stdc++.h>
using namespace std;

int main(){
	size_t n;
	cin>>n;

	while(n--){
		int x, y, sum=0;
		cin>>x>>y;
		if(!(x&1)) x++;

		for (int i = 0; i < y; ++i){
			sum += x;
			x += 2;
		}
		cout<<sum<<endl;
	}
	
	return 0;
}