#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // int T=3;
    // while(T--){

        int even=0, odd=0, pos=0, neg=0;

        for(int i=0; i<5; i++){
            int a=0;
            cin>>a;

            if(a&1){
                odd++;
            }

            else{
                even++;
            }

            if(a > 0){
                pos++;
            }
            else if(a < 0){
                neg++;
            }
        }
        
        cout<<even<<" valor(es) par(es)"<<endl;
        cout<<odd<<" valor(es) impar(es)"<<endl;
        cout<<pos<<" valor(es) positivo(s)"<<endl;
        cout<<neg<<" valor(es) negativo(s)"<<endl;



    // }
    
    
}
