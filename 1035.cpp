#include <bits/stdc++.h>
using namespace std;

int main(){
	int A, B, C, D;
	cin>>A>>B>>C>>D;

	if(A%2 == 0 && C >=0 && D >= 0){

		if(B > C && D > A){

			//int sumA = A+B, sumC = C+D;
			
			if(A+B < C+D){

				cout<<"Valores aceitos"<<endl;
			}

			else{
					cout<<"Valores nao aceitos"<<endl;
				}
		}
		else{
					cout<<"Valores nao aceitos"<<endl;
				}
	}
	else{
					cout<<"Valores nao aceitos"<<endl;
				}

	return 0;
}
