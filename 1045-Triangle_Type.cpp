#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int t=5;
//while(t--){

        double arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr, arr+3, greater<double>());

        double A=arr[0], B=arr[1], C=arr[2];
        double a = A*A, b = B*B, c = C*C;

        if(A >= (B+C)){
            cout<<"NAO FORMA TRIANGULO"<<endl;
        }

        else{

            if(a == (b + c)){
                cout<<"TRIANGULO RETANGULO"<<endl;
            }

            if(a > (b + c)){
                cout<<"TRIANGULO OBTUSANGULO"<<endl;
            }

            if(a < (b + c)){
                cout<<"TRIANGULO ACUTANGULO"<<endl;
            }

            if((A == B) && (A == C)){
                cout<<"TRIANGULO EQUILATERO"<<endl;
            }

            else if((A == C) || (A == B) || (B == C)){
                cout<<"TRIANGULO ISOSCELES"<<endl;
            }
    }
}


//}
