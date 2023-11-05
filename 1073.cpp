#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // int T=3;
    // while(T--){

        int a;
        cin>>a;
        lld power=0;
        for(int i=2; i<=a; i += 2){

            power = pow(i, 2);
            //cout<<i<<power<<endl;
            printf("%d^2 = %lld\n", i, power);
        }
    // }
    
    
}
