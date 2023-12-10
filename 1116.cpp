#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    size_t T;
    cin>>T;

    while(T--){
        double m, n;
        cin>>m>>n;

        cout<<fixed<<setprecision(1);
        if(n == 0 ){
            cout<<"divisao impossivel"<<endl;
        }

        else
        cout<<m/n<<endl;;
    }
}
