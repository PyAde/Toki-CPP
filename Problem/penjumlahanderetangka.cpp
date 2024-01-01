#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;

	int result = 1;
	cout << 1;
	for (int i = 2; i <= N; i++)
	{
		cout << '+'<<i;
		result = result + i;
	}
	cout << "="<<result;
}

