#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int16_t n, T;

    cin >> n >> T;

    while(T--){
    	string str;
    	cin >> str;

    	if(!str.compare("fechou")) ++n;
    	else --n;
    }
    cout << n << endl;

  
}