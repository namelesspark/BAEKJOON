#include <string>
#include <vector>

using namespace std;

int func(int slice, int n, int answer) {
   if (((slice*answer) - n) < 0) {
       answer += 1;
       return func(slice , n, answer);
   }
   else
       return answer;
}

int solution(int slice, int n) {
    int answer = 1;
    return func(slice, n, answer);
}