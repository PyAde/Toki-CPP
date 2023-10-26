#include <iostream>
using namespace std;

int main(){
    int n,d;

    cin>>n;
    
    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        
        bool c = true;
        if(a == 1){
            c = false;
        }
        d = 2;
        while(d * d <= a){
            if(a % d == 0){
                c = false;
            }
            d++;
        }
        if(c){
            cout<<"YA"<<endl;
        }else{
            cout<<"BUKAN"<<endl;
        }
    }
}