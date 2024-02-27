#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int16_t T;
    cin >> T;

    while(T--){
    	int n;
    	bool isPrime = true;
    	cin >> n;

    	for (int i = 2; i <= sqrt(n); ++i)
    	 {
    	 	if(n%i == 0){
    	 		isPrime = false;
    	 		break ;
    	 	}
    	 }

    	 if(isPrime){
    	 	cout << n << " eh primo"<<endl;
    	 } 

    	 else{
    	 	cout << n << " nao eh primo"<<endl;
    	 }
    }
  
}