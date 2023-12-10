#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        int m, n, sum=0;
        cin>>m>>n;

        if(m <= 0 || n <= 0){
        break ;
        }

        if(n < m)
        for( ; n <= m; n++){
            cout<<n<<" ";
            sum += n;
        }

        else{
            for( ; n >= m; m++){
            cout<<m<<" ";
            sum += m;
        }
        }

        cout<<"Sum="<<sum<<endl;;
    }
}
