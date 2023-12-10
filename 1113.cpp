#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        int m, n;
        cin>>m>>n;

        if(m == n){
        break ;
        }

        if(n < m){
            cout<<"Decrescente"<<endl; 
        }

        else{
            cout<<"Crescente"<<endl;
        }
    }
}
