#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[20];

   	for (int i = 0; i < 20; ++i)
   	{
   		cin>>arr[i];
   	}

   	for (int i = 0, j=19; i < 10; ++i, --j)
   	{
   		swap(arr[i], arr[j]);
   	}

   	for(int i = 0; i < 20; ++i){
   		printf("N[%d] = %d\n", i, arr[i]);
   	}
}