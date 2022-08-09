#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        map<int, string> rows;
        int pos = 1, up = 1;
        for(int i=0;i<s.length();i++){
            rows[pos] += s[i];
            cout<<"rows["<<pos<<"] : "<<s[i]<<endl;
            if(pos == 1 || (pos < numRows && up)){
                pos++;
                up = 1;
            }else{
                pos--;
                up = 0;
            }
        }
        string res = "";
        // cout<<"check"<<endl;
        // rows[0][0] = "this is dummy";
        // auto r = rows[0];
        cout<<"Check: "<<rows[0]<<endl;
        for(int i=1;i<=numRows;i++){
            res += rows[i];
        }
        return res;
    }
};

int main()
{
    
    Solution s;
    cout<<s.convert("PAYPALISHIRING", 3)<<endl;

    return 0;
}