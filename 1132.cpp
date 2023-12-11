#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, sum=0;
    cin>>a>>b;

    if(a < b)
      for(; a <= b; a++){

        if(a%13 == 0) continue ;
        sum += a;
    }

    else
     for(; b <= a; b++){

        if(b%13 == 0) continue ;
        sum += b;
    }

    cout<<sum<<endl;
}
