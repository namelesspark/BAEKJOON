#include <string>
#include <iostream>

using namespace std;

int main() {
    int exit, get_in;
	int max = 0;
	int now = 0;

	for (int i = 0; i < 4; i++) {
		cin >> exit >> get_in;
		now = now - exit + get_in;
		if (max < now) {
			max = now;
		}
	}
	cout << max;

	return 0;
}