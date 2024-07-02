#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str);

    if(str.length() <= 140){
    	cout << "TWEET" <<endl;

    }else{
    	cout << "MUTE" <<endl;
    }

    cout << "String length: " << str.length() << endl;


  
}