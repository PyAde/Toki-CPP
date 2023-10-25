#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int b;
	
	for(int i = 0; i < n; i++){
		cin>>b;
		if(b % 2 == 0){
			cout<<b<<" is even ";
		}else{
			cout<<b<<" is odd ";
		}
	}
}