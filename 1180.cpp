#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int16_t T;
    int minAddress, minData;
    cin >> T;
    int *v = new int[T];

    minAddress = -1;
    minData = INT_MAX;

    for (int i = 0; i < T; ++i){
    	cin >> v[i];

    	if(v[i] < minData){
    		minData = v[i];
    		minAddress = i;
    	}
    }

    printf("Menor valor: %d\nPosicao: %d\n", v[minAddress], minAddress);
  
  delete[] v;
}