#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    numbers_len = num2 - num1 + 1;
    
    int* answer = (int*)malloc(numbers_len*sizeof(int));
    
    for(size_t i = 0; i < numbers_len; i++) {
        answer[i] = numbers[num1 + i];
    }
    return answer;
}