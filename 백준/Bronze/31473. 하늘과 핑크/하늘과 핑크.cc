#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    long long sumA = 0, sumB = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sumA += A[i];
    }
    
    for (int i = 0; i < N; i++) {
        cin >> B[i];
        sumB += B[i];
    }
    
    long long d = gcd(sumA, sumB);
    
    long long a = sumB / d;
    long long b = sumA / d;
    
    cout << a << " " << b << endl;
    
    return 0;
}
