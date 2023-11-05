#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int i=1, j=60;

    while(j >= 0){
        cout<<"I="<<i<<" J="<<j<<endl;
        i += 3, j -= 5;
    }

    
}
