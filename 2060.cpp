#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    uint16_t T;
    uint16_t a2=0, a3=0, a4=0, a5=0;

    cin >> T;

    while(T--){
    	uint16_t a;
    	cin >> a;

    	if(a%2 == 0) a2++;
    	if(a%3 == 0) a3++;
    	if(a%4 == 0) a4++;
    	if(a%5 == 0) a5++;

    }
    
    cout << a2 << " Multiplo(s) de 2" << endl;
    cout << a3 << " Multiplo(s) de 3" << endl;
    cout << a4 << " Multiplo(s) de 4" << endl;
    cout << a5 << " Multiplo(s) de 5" << endl;
}