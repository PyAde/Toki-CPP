#include <iostream>
using namespace std;

int main(){
	int N,X,Y;
	cin>>N>>X>>Y;

	if (X>Y)
	{
		cout << (X * (N / Y) + (N%Y));
	}else{
		cout<< N;
	}
}