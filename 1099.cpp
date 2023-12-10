#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    size_t T;
    cin>>T;

    while(T--){
        int x, y, sum = 0;
        cin>>x>>y;

        if(x < y){
          for(x += 1 ; x < y; x++){

            if(x&1){
                sum += x;
            }
        }
    }

    else{
        for(y += 1 ; x > y; y++){

            if(y&1){
                sum += y;
            }
        }
    }
            cout<<sum<<endl;
    }
}
