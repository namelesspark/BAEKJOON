#include <string>
#include <iostream>

using namespace std;

int main() {
	int num;
	int whatnumber;
	int count = 0;


	cin >> num;

	int* arr = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	cin >> whatnumber;
	for (int i = 0; i < num; i++) {
		if (whatnumber == arr[i])
			count++;
	}
	cout << count << "\n";
	delete[] arr;

}