#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    
    cout<<abs(x2-x1) + abs(y2-y1);
}