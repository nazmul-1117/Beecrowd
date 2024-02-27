#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int16_t> v(1000);	
    int16_t T, n=0;
    cin >> T;

    for (int i = 0; i < 1000; ++i)
    {
    	v[i] = n;
    	printf("N[%d] = %d\n", i, n++);

    	if(n==T) n=0;
    }
    

  
}