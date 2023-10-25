#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	
	int i = 0;
	do{
		i++;
		a*=3;
		b*=2;
	}while(a<=b);
	cout<<i;
	return 0;
}