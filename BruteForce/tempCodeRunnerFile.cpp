#include <iostream>
#include <string>

using namespace std;
int main(){
	string s, t;
	cin>>s>>t;
	int i;
	for( i = 0; i < s.length() && i < t.length() && s[i] == t[i]; i++){

	}
int result = s.length() + t.length() - 2 *i;
cout<<result<<endl;
}