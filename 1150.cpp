#include <bits/stdc++.h>
using namespace std;

int main(){

	int x, z;
	cin>>x;
	
	do
	{
		cin>>z;
	} while (x >= z);

	int sum=0, i=0;

	while(z > sum){
		sum += x++;
		i++;
	}

	cout<<i<<endl;
	
	return 0;
}