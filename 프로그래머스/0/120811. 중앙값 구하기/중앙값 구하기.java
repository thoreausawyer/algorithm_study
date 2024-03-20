class Solution {
   public int solution(int[] array) {
        int answer = 0;
        // 버블 정렬
        int n = array.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    // 두 원소의 위치 교환
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        for(int i = 0; i <= array.length; i++){
            
            // 중앙값 저장
            if ( i == array.length/2){
                answer = array[i];
            }
        }
        return answer;
    }
}