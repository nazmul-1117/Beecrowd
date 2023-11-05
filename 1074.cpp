#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n == 0){
            cout<<"NULL"<<endl;
        }

        else if(n&1){
            //odd
            if(n < 0){
                cout<<"ODD NEGATIVE"<<endl;
            }
            else{
                cout<<"ODD POSITIVE"<<endl;
            }

        }
        else{
            //even
            if(n < 0){
                cout<<"EVEN NEGATIVE"<<endl;
            }
            else{
                cout<<"EVEN POSITIVE"<<endl;
            }
        }

    }      
}
