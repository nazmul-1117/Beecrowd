#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<double> v(100);
    double n;
    cin>>n;

    for (int i = 0; i < 100; ++i)
    {
    	v[i] = n;
    	n /= 2;
    }

    for (int i = 0; i < 100; ++i)
    {
    	printf("N[%d] = %0.4f\n", i, v[i]);
    }

  
}