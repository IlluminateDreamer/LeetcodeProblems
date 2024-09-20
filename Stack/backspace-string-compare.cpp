class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_r;
        stack<char> t_r;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] != '#')s_r.push(s[i]);
            else if(!s_r.empty()){
                s_r.pop();
            }
        }
        for(int i = 0; i < t.length(); i++) {
            if(t[i] != '#')t_r.push(t[i]);
            else if(!t_r.empty()){
                t_r.pop();
            }
        }
        while(!s_r.empty() && !t_r.empty()) {
            if(s_r.top() == t_r.top()){
                s_r.pop();
                t_r.pop();
            } else {
                return false;
            }
        }
        return s_r.empty() && t_r.empty();
    }
};
