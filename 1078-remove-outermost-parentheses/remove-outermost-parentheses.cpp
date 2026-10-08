class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        stack<char> st;
        bool first = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                
                if (!first) {
                    st.push(s[i]);
                    ans += s[i];
                }
                first=false;

            } else if (s[i] == ')' ) {
                if(!st.empty()){
                    ans+=s[i];
                    st.pop();
                    
                }
                else first=true;
            }
        }
        return ans;
    }
};