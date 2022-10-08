// class Solution {
// public:
//     int stairs(int n, int temp = 0){
//         if(temp > n) return 0;
//         else if(n == temp) return 1;
        
        
//         temp = stairs(n, temp+1) + stairs(n, temp+2);
        
//         return temp;
//     }
//     int climbStairs(int n) {
//         return stairs(n);
//     }
// };
class Solution {
public:
    int climbStairs(int n) {
        int one = 1, two = 1;
        for(int i=0;i<n-1;i++){
            int temp = one;
            one += two;
            two = temp;
        }
        return one;
    }
};
