import java.math.BigInteger;
class Solution {
    public int solution(int balls, int share) {
        BigInteger answer1 = BigInteger.ONE;
        BigInteger answer2 = BigInteger.ONE;
        BigInteger answer3 = BigInteger.ONE;

        for(int i = 0; i < balls; i++){
            answer1 = answer1.multiply(BigInteger.valueOf(balls - i));
        }
        for(int i = 0; i < (balls-share); i++){
            answer2 = answer2.multiply(BigInteger.valueOf((balls-share) - i));
        }
        for(int i = 0; i < share; i++){
            answer3 = answer3.multiply(BigInteger.valueOf(share - i));
        }

        BigInteger result = answer1.divide(answer2.multiply(answer3));

        return result.intValue();
    }
}