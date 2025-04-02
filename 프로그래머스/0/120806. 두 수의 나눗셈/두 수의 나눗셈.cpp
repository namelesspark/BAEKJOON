#include <string>
#include <vector>

using namespace std;

int function(int num1, int num2) {
    if (num1 > 100 && num2 > 100)
        return 0;
    else
        return (num1 * 1000) / num2;
}

int solution(int num1, int num2) {
    return function(num1, num2);
}