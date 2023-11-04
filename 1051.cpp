#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    // int T=3;
    // while(T--){
        double salary=0, tax=0;
        cin>>salary;

        salary -= 2000.00;

        if(salary > 0){

            if(salary < 1000){
                tax += (salary * (0.08));
            }
            else
            tax = 1000 * (0.08);

            salary -= 1000.00;
        }

        if(salary > 0){
            if(salary < 1500){
                tax += (salary * (0.18));
            }
            else
            tax += (1500 * (0.18));

            salary -= 1500.00;
        }

        if(salary > 0){
            tax += (salary * (0.28));
            //salary -= 1500.00;
        }
        cout<<fixed<<setprecision(2);

        if(tax != 0)
            cout<<"R$ "<<tax<<endl;
        else
            cout<<"Isento"<<endl;
    // }
    
    
}
