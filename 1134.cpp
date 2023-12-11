#include <bits/stdc++.h>
#define lld long long int

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    size_t alco=0, gas=0, dis=0, op=0;
    do
    {
        cin>>op;
        switch(op){
        case 1: ++alco; break ;
        case 2: ++gas; break ;
        case 3: ++dis; break ;
        }

    } while (op != 4);

    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alco<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<dis<<endl;
}
