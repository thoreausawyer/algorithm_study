import java.math.BigInteger;
class Solution {
    public int[] solution(int numer1, int denom1, int numer2, int denom2) {
        BigInteger numerator = BigInteger.valueOf(numer1).multiply(BigInteger.valueOf(denom2))
                .add(BigInteger.valueOf(numer2).multiply(BigInteger.valueOf(denom1)));
        BigInteger denominator = BigInteger.valueOf(denom1).multiply(BigInteger.valueOf(denom2));

        // 결과 분수를 기약 분수로 변환
        BigInteger gcd = numerator.gcd(denominator);
        numerator = numerator.divide(gcd);
        denominator = denominator.divide(gcd);

        System.out.println(numerator);
        System.out.println(denominator);

        // 결과를 int 배열로 반환
        int[] result = {numerator.intValue(), denominator.intValue()};
        return result;
    }
}