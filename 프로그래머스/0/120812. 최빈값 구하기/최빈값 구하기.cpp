#include <string>
#include <vector>
#include <algorithm> // 필요시 max_element 사용을 위해 포함

using namespace std;

int freq(vector<int>& array) {
    
    int def_size = 0; // count 벡터 크기를 정하기 위한 최대값
    for (int i = 0; i < array.size(); i++) { 
        if (def_size < array[i]) 
            def_size = array[i]; 
    }
    
    // def_size에 맞춰 (최대값 + 1) 크기의 벡터 생성
    vector<int> count(def_size + 1, 0);

    // 각 숫자의 빈도수를 count 벡터에 집계
    for (int i = 0; i < array.size(); i++) {
        count[array[i]] += 1;
    }
    
    int now_max = 0;
    int mode = 0; // 최빈값으로 결정할 변수
    bool is_duplicated = false;
    
    for (int idx = 0; idx < count.size(); idx++) {
        if (now_max < count[idx]) {
            now_max = count[idx];
            mode = idx;
            is_duplicated = false;  // 새로운 최빈값을 찾으면 중복 플래그를 초기화
        }
        else if (count[idx] == now_max && count[idx] != 0) {
            is_duplicated = true;
        }
    }
    
    return is_duplicated ? -1 : mode;
}

int solution(vector<int> array) {
    int answer = freq(array);
    return answer;
}
