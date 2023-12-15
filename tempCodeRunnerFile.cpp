#include <iostream>
using namespace std;

	int indeks[] = {
		6,7,8,5,6,4,5,6,8,7,
		3,5,9,8,7,8,5,6,4,3,
		5,6,3,4,7,1,8,9,7,5
	};
int main(){
	int a = 0;
	int lengthOfindeks = sizeof(indeks) / sizeof(indeks[0]);

	for (int i = 0; i < lengthOfindeks; i++)
	{
		a +=indeks[i];
		a += 1;
	}
	double result = static_cast<double>(a) / lengthOfindeks;
	cout << fixed << setprecision(2) <<result<<endl;
}