#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;
	int b[100];

	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
	}
	int terkecil = b[0];
	for (int i = 0; i < a; i++)
	{
		if(terkecil > b[i]){
			terkecil = b[i];
		}
	}
	cout << terkecil;
}