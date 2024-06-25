#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int16_t T, a;
    int16_t count = 0;

    cin >> T;

    while(cin>>a){
    	if(a == T) count++;
    }

    cout << count << endl; 
}