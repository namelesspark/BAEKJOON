#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    if ( n % 2 == 1)
        n--;
    
    while ( n > 0) {   
        answer += n;
        n = n - 2;
    }
    
    return answer;
}