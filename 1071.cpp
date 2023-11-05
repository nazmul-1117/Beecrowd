#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // int T=3;
    // while(T--){

        int xsum=0, ysum=0;
        int x, y;
        cin>>x>>y;

        for(int i=1; i<x || i<y; i += 2){
            
            if(i<x)
                xsum += i;
            if(i<y)
            ysum += i;

        }

        for(int i=-1; i>x || i>y; i -= 2){
            
            if(i>x)
                xsum -= i;
            if(i>y)
            ysum -= i;

        }

        cout<<xsum-ysum<<endl;



    // }
    
    
}
