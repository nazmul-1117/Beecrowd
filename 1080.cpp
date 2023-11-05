#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n=100, max = 0, index = 0;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        //arr[i] = rand()%100;
    }


    max = arr[0];

    for(int i=1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
    }
    cout<<max<<endl;
    cout<<index+1<<endl;

    
}
