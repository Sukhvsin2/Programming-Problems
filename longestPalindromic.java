
/**
 * @file longestPalindromic.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given a string s, return the longest palindromic substring in s.
 * @problemRefrence https://leetcode.com/problems/longest-palindromic-substring/
 * @version 1.0
 * @date 2022-08-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution{
        public String longestPalindrome(String s){
            if(s == "" || s.length() < 1) return "";
            int start = 0, end = start;
            
            for(int i=0;i<s.length();i++){
                int len1 = startFromMiddle(s, i, i); // case 1: for string like "racecar" it'll starts from middle
                int len2 = startFromMiddle(s, i, i+1); // case 2: for other strings
                int len = len1 > len2 ? len1 : len2;
                // cout<<i<<". len1: "<<len1<<" len2: "<<len2<<endl;
                if(len > end - start){
                    start = i - ((len - 1) / 2);
                    end = i + (len / 2);
                }
                // cout<<i<<". Start: "<<start<<" End: "<<end<<endl<<endl;
            }
            String temp = "";
            while(start <= end){
                temp+=s.charAt(start);
                start++;
            }
            
            return temp;
        }
        
        public int startFromMiddle(String s, int left, int right){
            if(s == "" || left > right) return 0;
            while(left >= 0 && right < s.length() && s.charAt(left) == s.charAt(right)){
                left--;
                right++;
            }
            // cout<<"left: "<<left<<" right: "<<right<<endl;
            return right - left - 1;
        }
}
