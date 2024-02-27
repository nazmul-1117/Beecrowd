#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10];

    for (int i = 0; i < 10; ++i)
    {
    	int a=0;
    	cin>>a;

    	if(a <= 0){
    		arr[i] = 1;
    		continue ;
    	}
    	arr[i] = a;
    }

    for(int i=0; i<10; i++){
    	printf("X[%d] = %d\n", i, arr[i]);
    }

  
}