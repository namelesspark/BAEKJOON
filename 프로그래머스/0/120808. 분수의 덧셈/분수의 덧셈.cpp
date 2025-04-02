#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int denom = denom1 * denom2; // 분모 통일
    
    numer1 *= denom2; // 대각선 곱하기
    numer2 *= denom1;
    
    int numer = numer1 + numer2; // 분자의 합
    
    int div = gcd(numer, denom);
    
    vector<int> answer = { numer / div, denom / div };
    
    return answer;
}
