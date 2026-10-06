class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')' && !st.empty()){
                st.pop();
            } else{
                cnt++;
            }
        }
        return st.size()+cnt;
    }
};