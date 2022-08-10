
/**
 * @file reverseInteger.java
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the 
          signed 32-bit integer range [-231, 231 - 1], then return 0.
 * @problemRefrence https://leetcode.com/problems/reverse-integer/
 * @version 1.0
 * @date 2022-08-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
    public int reverse(int x) {
        if((x/10 > Integer.MAX_VALUE/10 && x != 0) || x == Integer.MAX_VALUE/10) return 0;
        boolean flag = false;
	    if(x < 0) {
	        x *= -1;
	        flag = true;
	    }
	    int temp = x, reverseNum = 0;
	    while(temp > 0){
            int lastDigit = temp % 10;
            if (reverseNum > Integer.MAX_VALUE/10 || (reverseNum == Integer.MAX_VALUE / 10 && lastDigit > 7)) return 0;
            reverseNum = reverseNum * 10 + lastDigit;
            temp = temp / 10;
	    }
	    if(flag) reverseNum *= -1;
	    System.out.println(reverseNum);
        return reverseNum;
    }
}
