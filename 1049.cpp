#include <bits/stdc++.h>
#define lld long long int

using namespace std;

void vertebrado(string& s2, string& s3){
    if(s2 == "ave"){
        if(s3 == "carnivoro"){
            cout<<"aguia"<<endl;
        }
        else{
            cout<<"pomba"<<endl;
        }
    }
    else{
        if(s3 == "onivoro"){
            cout<<"homem"<<endl;
        }
        else{
            cout<<"vaca"<<endl;
        }

    }

}

void invertebrado(string& s2, string& s3){
    if(s2 == "inseto"){
        if(s3 == "hematofago"){
            cout<<"pulga"<<endl;
        }
        else{
            cout<<"lagarta"<<endl;
        }
    }
    else{
        if(s3 == "hematofago"){
            cout<<"sanguessuga"<<endl;
        }
        else{
            cout<<"minhoca"<<endl;
        }

    }

}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

// int T=3;

// while(T--){

    string s1, s2, s3;
    cin>>s1>>s2>>s3;

    if (s1 == "vertebrado")
        vertebrado(s2, s3);
    else{
        invertebrado(s2, s3);
    }
//}


    
}
