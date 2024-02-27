#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double arr[100];

    for (int i = 0; i < 100; ++i){
    	cin >> arr[i];

    	if(arr[i] <= 10){
    		printf("A[%d] = %0.1f\n", i, arr[i]);
    	}
    }
}