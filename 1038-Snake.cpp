#include <bits/stdc++.h>
using namespace std;

int main(){
	 int X, Y, product=0;
	 double *rs {new double[6] {0, 4.00, 4.50, 5.00, 2.00, 1.5}};

	 cout<<fixed<<setprecision(2);
	 cin>>X>>Y;

	 cout<<"Total: R$ "<<rs[X]*Y<<endl;
	 
	 delete[] rs;
	return 0;
}
