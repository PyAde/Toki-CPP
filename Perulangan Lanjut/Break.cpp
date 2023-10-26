#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    
    for(int i = 1; i <= a; i++){
        if(i%10==0){
            continue;
        }else if(i==42){
            cout<<"ERROR"<<endl;
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}