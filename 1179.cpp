#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int32_t main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> par;
    vector<int> impar;

    for (int i = 0; i < 15; ++i){
    	int a;
    	cin>>a;

    	if(a&1){
    		impar.push_back(a);

    		if(impar.size() == 5){
    			for (int j = 0; j < 5; ++j){
    				printf("impar[%d] = %d\n", j, impar[j]);
    			}
    			impar.clear();
    		}
    	}

    	else{
    		par.push_back(a);

    		if(par.size() == 5){
    			for (int j = 0; j < 5; ++j){
    				printf("par[%d] = %d\n", j, par[j]);
    			}
    			par.clear();
    		}
    	}  
	}

	for (int i = 0; i < impar.size(); ++i){
		printf("impar[%d] = %d\n", i, impar[i]);
	}

	for (int i = 0; i < par.size(); ++i){
		printf("par[%d] = %d\n", i, par[i]);
	}
}