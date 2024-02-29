#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int16_t T;
    while(cin>>T){
        vector<uint16_t> v(T);
        int maxNumber = INT_MIN;

        for (int i = 0; i < T; ++i){
            cin>>v[i];
            if(v[i] > maxNumber){
                maxNumber = v[i];
            }
        }

        if(maxNumber < 10){
            cout<<1<<endl;
        }
        else if(maxNumber < 20){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
}