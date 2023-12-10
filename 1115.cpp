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

        if(m == 0 || n ==0 ){
            break ;
        }

        if(m > 0){
            if(n > 0){
                cout<<"primeiro"<<endl;
            }
            else{
                cout<<"quarto"<<endl;
            }
        }

        else{
            if(n > 0){
                cout<<"segundo"<<endl;
            }
            else{
                cout<<"terceiro"<<endl;
            }
        }
    }
}
