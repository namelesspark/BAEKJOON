#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int n = age, d = 1;
    while (n /= 10) {
        d++;
    }
    char* answer = malloc(d + 1);
    answer[d] = '\0';
    while (d--) {
        answer[d] = 'a' + age % 10;
        age /= 10;
    }
    return answer;
}