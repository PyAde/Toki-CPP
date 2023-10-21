#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n<10){
        cout<<"satuan";
    }else if(n>9 && n<100){
        cout<<"puluhan";
    }else if(n>99 && n<1000){
        cout<<"ratusan";
    }else if(n>999 && n<10000){
        cout<<"ribuan";
    }else if(n>9999 && n<100000){
        cout<<"puluhribuan";
    }else
    return 0;
}