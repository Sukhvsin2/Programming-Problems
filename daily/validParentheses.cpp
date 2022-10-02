class Solution {
public:
    bool isValid(string s) {
        if(s.size() < 2) return false;
        map<char, char> bracs = {
            {')','('},
            {'}','{'},
            {']','['}
        };
        map<char, bool> entry = {
            {'(', true},
            {'{', true},
            {'[', true},
            {')', false},
            {']', false},
            {'}', false},
        };
        
        stack<char> c;
        
        for(int i=0;i<s.size();i++){
            if(entry[s[i]]){
                c.push(s[i]);
                continue;
            }
            if(c.empty()) return false;
            if(c.top() != bracs[s[i]]) return false;
            c.pop();
        }
        return c.empty();
    }
};
