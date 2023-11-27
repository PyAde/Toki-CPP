#include <iostream>
#include <string>
using namespace std;

int main (){
    string s1,s2;
    cin>>s1>>s2;

    size_t find = s1.find(s2);
    s1.erase(find, s2.length());

    cout << s1;
}