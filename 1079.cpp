#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;

    cout<<fixed<<setprecision(1);
    while(t--){

        double a, b, c, avg;
        cin>>a>>b>>c;

        avg = (a*2.0) + (b*3.0) + (c*5.0);
        avg /= 10.0;

        cout<<avg<<endl;
    }
    
}v
