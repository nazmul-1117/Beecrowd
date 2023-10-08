#include <bits/stdc++.h>
using namespace std;

int main(){
	 double a, b, c;
	 double D1, R1, R2;

	 cin>>a>>b>>c;

	 D1 = (b*b) - 4 * a * c;

	 if(a != 0 && D1 >= 0){

	 	R1 = ((-b) + sqrt(D1))/(2*a);
	 	R2 = ((-b) - sqrt(D1))/(2*a);

	 	cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<endl;
	 	cout<<fixed<<setprecision(5)<<"R2 = "<<R2<<endl;
	 }

	 else if(a == 0 || D1 < 0){
	 	cout<<"Impossivel calcular"<<endl;
	 } 

	return 0;
}
