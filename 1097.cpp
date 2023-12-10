#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=1; i<10; i += 2){
        for(int j=i+6; j >= i+4; j--){
            printf("I=%d J=%d\n", i, j);
        }
    } 
}
