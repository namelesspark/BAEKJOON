#include <string>
#include <vector>

using namespace std;

void sort(vector<int> &array) {
    for(int i = 0; i < array.size(); i++) {
        for(int j = 0; j < array.size() - 1; j++) {
            if (array[j] > array[j + 1])
                swap(array[j], array[j+1]);
        }
    }
}

int midVal(vector<int> &array) {
    int mid = array.size() / 2;
    return array[mid];
}

int solution(vector<int> array) {
    sort(array);
    
    int answer = midVal(array);
    return answer;
}