#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int *a = new int[n];
    int ab, b, c;
    
    cin>>ab>>b>>c;
    
    a[0] = ab;
    a[1] = b;
    a[2] = c;
        
    
    //bubble sort    
    for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                
                if(a[i] > a[j]){
                    
                    swap(a[i], a[j]);
                }
                
            }
    }
    
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
        
        
        cout<<endl;
        
    cout<<ab<<endl<<b<<endl<<c<<endl;
    
        
    delete[] a;
    
    return 0;
}
