#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    int num = 0;
    vector<int> answer;
    
    while (money >= 5500) {
        money -= 5500;
        num++;
    }
    answer.push_back(num);
    answer.push_back(money);
    return answer;
}