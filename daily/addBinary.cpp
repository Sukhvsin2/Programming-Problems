class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string res = "";
        int i = a.length()-1;
        int j = b.length()-1;
        
        while(i >= 0 || j >= 0){
            int sum = carry;
            if(i >= 0) sum += a[i] - '0';
            if(j >= 0) sum += b[j] - '0';
            res = to_string(sum%2) + res;
            carry = sum/2;
            i--;
            j--;
        }
        if(carry) res = '1' + res;
        return res;
    }
};
