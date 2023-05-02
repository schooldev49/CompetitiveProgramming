// tried a new approach here ig?
import java.math.BigInteger;
class Solution {
    public int arraySign(int[] nums) {
        // 1 if X is positive
        // -1 if x is negative
        // 0 if x = 0
        BigInteger num = BigInteger.ONE;
        for (Integer i: nums){
            BigInteger test = new BigInteger(i.toString());
            num = num.multiply(test);
            test = null;
        }
        int result = 0;
       
        return num.compareTo(BigInteger.ZERO);
    }
}
