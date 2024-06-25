#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lld T;
    cin >> T;

    while(T--){
    	lld a;
    	cin >> a;

    	if((a < 2015)){
    		cout << 2015-0LL-a << " D.C.\n";

    	}else if(a > 2015){
    		cout << a-0LL-2014 << " A.C.\n";

    	}else{
    		cout << 1 << " A.C.\n";
    	}
    }
}