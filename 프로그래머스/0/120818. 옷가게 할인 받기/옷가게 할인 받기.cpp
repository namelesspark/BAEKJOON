#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    if (price >= 100000 && price < 300000)
        return price - (price * 0.05);
    else if (price >= 300000 && price < 500000)
        return price - (price * 0.1);
    else if (price >= 500000)
        return price - (price * 0.2);
    else
        return price;
}