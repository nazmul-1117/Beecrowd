#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> reminder;
    vector <char> hexa(16);

    lld decimal;
    cin>>decimal;

    while(decimal >= 16){
    	if(decimal == 16){
    		reminder.push_back(0);
    		decimal /= 16;
    		continue ;
    	}

    	reminder.push_back(decimal%16);
    	decimal /= 16;
    }

    if(decimal > 0){
    	reminder.push_back(decimal);
    }

    hexa[10] = 'A';
    hexa[11] = 'B';
    hexa[12] = 'C';
    hexa[13] = 'D';
    hexa[14] = 'E';
    hexa[15] = 'F';

    reverse(reminder.begin(), reminder.end());

    for(auto e: reminder){
    	if(e >= 10){
    		cout << hexa[e];
    		continue ;
    	}
    	cout << e ;
    }
    cout<<endl;
}