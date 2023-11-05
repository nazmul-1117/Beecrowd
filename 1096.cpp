#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int i=1, j=60;

    while(i <= 9){
        
            j = 7;
            while(j >= 5){
            cout<<"I="<<i<<" J="<<j<<endl;
            j--;    
            }

        i+=2; 
    }

    
}
