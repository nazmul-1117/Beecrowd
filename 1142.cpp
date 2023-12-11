#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    size_t n, i=1;
    cin>>n;

    while(n--){
        int j = i+3;
        for(; i <= j; i++){
            if(i == j) cout<<"PUM"<<endl;
            else cout<<i<<" ";
        }
    }
}
