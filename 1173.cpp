#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    uint16_t arr[10];
    cin >> arr[0];

    printf("N[%d] = %d\n", 0, arr[0]);
    for (uint16_t i = 1; i < 10; ++i){
    	arr[i] = 2*arr[i-1];
    	printf("N[%d] = %d\n", i, arr[i]);
    }
}