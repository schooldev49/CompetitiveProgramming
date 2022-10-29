/*

PLAN OUT

Remember: Negative exponents = 1/n(powerx)

Prevent overflow = use longs

While loop so Leetcode doesnt taket oo long

Create variable for N so it doesnt overflow (0 - n)
*/

class Solution {
public:
  double myPow(double x, int n) {
    long double answer = 1;
    long int n2 = n;
          if (n < 0) x = 1/x;
      
      n2 = (n2 < 0 ? 0 - n2 : n2); // abs
      
      while (n2 != 0){
          if (n2 % 2 != 0) answer *= x;
              x *= x;
              n2 /= 2;
      
      
      }
      return answer;
      
  
      
   
}
};

