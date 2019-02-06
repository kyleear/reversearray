#include <iostream>

using namespace std;

void reverseArray() {
	int num[4] = { 1,2,3,4};

	for (int i = 3; i>=0; i--) {
		cout << num[i]<<" ";
	}
}

int main() {

	reverseArray();

	system("pause");
	return 0;
}