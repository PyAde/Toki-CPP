#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	bool Palindrom = true;
	for (int  i = 0; i < S.length() / 2; i++)
	{
		if(S[i] != S[S.length() - i - 1]){
			Palindrom = false;
			break;
		}
	}
	if(Palindrom){
		cout << "YA" << endl;
	}else{
		cout << "BUKAN" << endl;
	}
	return 0;
}
		cout << "BUKAN" << endl;
	}
	return 0;
}