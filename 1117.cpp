#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed<<setprecision(2);

    size_t T=1;
    //cin>>T;

    double m, c=0, sum=0, avg=0;

    while(T){
        cin>>m;

        if(m >= 0.0 && m <= 10.0){
            c++;
            sum += m;
        }

        else{
            cout<<"nota invalida"<<endl;
        }

        if(c == 2) break ;
    }

    cout<<"media = "<<sum/c<<endl;
}
