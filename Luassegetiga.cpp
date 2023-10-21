#include <iostream>

using namespace std;

int main(){
    float a,t,luas;
    cin>>a;
    cin>>t;
    
    luas = (a*t) / 2.0;
    cout<<"%.2lf\n"<<luas;
				//  printf("%.2lf\n", luas);
    return 0;
}