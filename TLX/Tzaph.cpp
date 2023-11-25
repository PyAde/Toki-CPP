#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int B[N];
	bool EQUAL = true;
	bool NONDECREASING = true;
	bool NONINCREASING = true;

	for (int i = 0; i < N; i++)
	{
		cin>>B[i];
		if (B[i] != B[0])
		{
			EQUAL = false;
		}
		if (B[i] < B[i - 1])
		{
			NONDECREASING = false;
		}
		if (B[i] > B[i - 1])
		{
			NONINCREASING = false;
		}
		
	}
	
}