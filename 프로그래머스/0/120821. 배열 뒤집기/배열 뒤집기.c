int* solution(int* num_list, int length) {
    int* answer = (int*)malloc(length * sizeof(int));
    int count = 0;
    for(int i = length - 1; i >= 0; i--) {
        answer[count] = num_list[i];
        count++;
    }
    return answer;
}