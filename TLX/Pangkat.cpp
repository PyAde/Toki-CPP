#include <iostream>
using namespace std;
int pangkat (int a, int b){
	if (b <= 1)
	{
		return a;
	}else{
		return a * pangkat(a,(b-1));
	}
}

int main(){
	int  a,b;
	cin>>a>>b;
	cout<<pangkat(a,b)<<endl;
}