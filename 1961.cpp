#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int16_t N, P, a;
    bool isWon = true;

    cin >> P >> N ;
    cin >> a;

    for (int i = 0; i < N-1; ++i){
    	int16_t b;
    	cin >> b;

    	if (abs(a-b) > P){
    		isWon = false;
    		break;
    	}
    	a = b;
    }

    if (isWon){
    	cout << "YOU WIN" << endl;

    }else{
    	cout << "GAME OVER" << endl;
    }
}