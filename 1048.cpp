#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        cout<<fixed<<setprecision(2);
        double salary, earn;
        int percent=0;
        cin>>salary;

        if(salary >= 0 && salary <= 400.00){
            earn = salary * 0.15;
            percent = 15;
            
        }

        else if(salary <= 800.00){
             earn = salary * 0.12;
             percent = 12;
        }

        else if(salary <= 1200.00){
             earn = salary * 0.1;
             percent = 10;
        }

        else if(salary <= 2000.00){
             earn = salary * 0.07;
             percent = 7;
        }

        else{
             earn = salary * 0.04;
             percent = 4;
        }

        cout<<"Novo salario: "<<salary+earn<<endl;
        cout<<"Reajuste ganho: "<<earn<<endl;
        cout<<"Em percentual: "<<percent<<" %"<<endl;

    
}
