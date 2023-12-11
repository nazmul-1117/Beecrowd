#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin>>a>>b;
    if(a > b) swap(a, b);

    for(a+=1; a < b; a++){

        if(a%5 == 2 || a%5 == 3){
            cout<<a<<endl;
        }
    }
}
