#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;

	int result = 0;
	for (int i = 0; i < N; i++)
	{
		if(N % i == 0){
			result++;
		}
	}
	if(result % 2 == 0){
		cout << "Lampu mati"<<endl;
	}else{
		cout << "Lampu menyala"<<endl;
	}
}