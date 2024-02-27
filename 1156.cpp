#include <bits/stdc++.h>
using namespace std;

int main(){

	double s=0.0F;

	for(int i=1, j=1; i<=39; i+=2){
		s += (float)i/j;

		j *= 2;
	}
	cout<<fixed<<setprecision(2);
	cout<<s<<endl;
		
	return 0;
}