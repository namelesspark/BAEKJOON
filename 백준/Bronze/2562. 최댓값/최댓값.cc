#include <iostream>

using namespace std;

static int N = 9;

int main() {
	int max, cnt;

	int* array = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	max = array[0];
	cnt = 1;
	for (int i = 0; i < N; i++) {
		if (max < array[i]) {
			max = array[i];
			cnt = i + 1;
		}
	}


	cout << max << "\n" << cnt << "\n";

	delete[] array;
}