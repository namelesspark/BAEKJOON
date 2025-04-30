#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int sheep_price = n*12000;
    int k_price = k*2000;
    
    int count = n/10;
    int answer = sheep_price + k_price - count*2000;
    return answer;
}