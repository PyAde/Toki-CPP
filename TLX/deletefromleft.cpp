#include <iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;

    int s1 = s.length() - 1;
    int s2 = t.length() - 1;
    int result = 0;
    for (int i = 0; s1 >= 0 && s2>=0 && s[s1] == t[s2]; i++)
    {
        s1--;
        s2--;
        result ++;
    }
    
    cout<<s.length() - result + t.length() - result;
}