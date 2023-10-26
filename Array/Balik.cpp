#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int nums[101];
    while(cin>>nums[a]){
        a++;
    }
    for(int i = a-1; i>=0; i--){
        cout<<nums[i]<<endl;
    }
    return 0;
}