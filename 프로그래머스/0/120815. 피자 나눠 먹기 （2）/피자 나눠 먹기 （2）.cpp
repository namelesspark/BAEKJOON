#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    int i = 1;
    while (true) {
        
        if ((6 * i) % n == 0){
            answer = i;
            break;
        }
        i++;
    }
        
    return answer;
}