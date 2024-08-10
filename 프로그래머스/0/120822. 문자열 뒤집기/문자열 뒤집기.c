#include <stdio.h>
#include <string.h>

char* solution(const char* my_string) {
    int length = strlen(my_string);
    char* answer = (char*)malloc((length + 1) * sizeof(char)); // +1 for the null terminator
    for (int i = 0; i < length; i++) {
        answer[i] = my_string[length - 1 - i];
    }
    answer[length] = '\0'; // Null-terminate the string
    return answer;
}