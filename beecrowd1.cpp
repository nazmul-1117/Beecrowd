#include <bits/stdc++.h>
#define lld long long int
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed<<setprecision(2);
    
    int inter, gremio, a=0, counter=0;
    int iCounter=0, gCounter=0, draw=0;

    do
    {
        cin>>inter>>gremio;
        ++counter;
        if(inter > gremio)++iCounter;
        else if(inter < gremio) ++gCounter;
        else ++draw;

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>a;

    } while (a != 2);


    cout<< counter << " grenais"<<endl;
    cout<< "Inter:" << iCounter<<endl;
    cout<< "Gremio:" << gCounter<<endl;
    cout<< "Empates:" << draw<<endl;

    if(iCounter > gCounter) cout<<"Inter venceu mais";
    else if(iCounter < gCounter) cout<<"Gremio venceu mais";
    else cout<<"Não houve vencedor";   
}