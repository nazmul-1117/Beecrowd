#include <bits/stdc++.h>
#define lld long long int
using namespace std;

void calculate(){

    double m = 0.0, c = 0.0, sum = 0.0, avg = 0.0;

    while(c < 2){
        cin>>m;

        if(m >= 0.0 && m <= 10.0){
            c++;
            sum += m;
        }

        else{
            cout<<"nota invalida"<<endl;
        }
    }
    cout<<"media = "<<sum/c<<endl; 
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed<<setprecision(2);

    calculate();
    int a;

    do
    {
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>a;

        switch(a){
            case 1: calculate(); break;

            case 2: exit(0);

            default :
                ;
            }

    } while (1);
    
}
