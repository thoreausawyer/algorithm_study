import java.util.*;
class Solution {
    public int solution(int[] array, int n) {
        int answer = 0;
        List<Integer> list = new ArrayList<>();

        if(array.length == 1 && array[0] == n){
            answer = n;   
        }else{
            // 리스트에 담고
            for(int a : array){
                list.add(a);
            }
            // n 추가 후 정렬 
            if(list.indexOf(n) == -1) list.add(n);
            Collections.sort(list);
            
            // n 기점으로 앞의 수와 뒤의 수 변수 담기
            int a = 101;
            int b = 101;

            if(list.indexOf(n) - 1 != -1) a = list.get(list.indexOf(n) - 1);
            if(list.get(list.size()-1) != n) b = list.get(list.indexOf(n) + 1);
            
            // 확인
            System.out.println(a);
            System.out.println(b);

            // n과 차
            int absA = Math.abs(a-n);
            int absB = Math.abs(b-n);

            System.out.println(absA);
            System.out.println(absB);

            if(absA > absB){
                answer = b;
            }else{
                answer = a;
            }
        }

        //확인
        System.out.println(list);

        for(int a : array){
            if(a == n){
                answer = n;
            }
        }

        
        return answer;
    }
}