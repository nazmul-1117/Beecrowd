#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

    int n;
    cin>>n;

    for(int i=1; i<=10; i++){
        lld p = n*i;
        printf("%d x %d = %lld\n", i, n, p);
    }
    
    
    
}
