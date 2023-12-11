#include <bits/stdc++.h>
using namespace std;

int main(){
    std :: size_t n;
    std :: cin>>n;

    for(int i=1; i <= n; i++){

        for(int j=0; j<2; j++){

            printf("%d %d %d\n", (i), (i*i)+j, (i*i*i)+j);
        }
    }
}
