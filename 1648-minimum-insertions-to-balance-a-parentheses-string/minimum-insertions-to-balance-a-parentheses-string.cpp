class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        string temp="";
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                temp+=s[i];
            }
            else if(s[i]==')' && s[i+1]!=')'){
                cnt++;
                temp+=s[i];
            }
            else{
                temp+=s[i];
                i++;
            }
        }
        for(int i=0;i<temp.length();i++){
            if(temp[i]=='('){
                st.push(temp[i]);
            }
            else if(temp[i]==')' && !st.empty()){
                st.pop();
            }
            else{
                cnt++;
            }
        }
        return cnt+2*st.size();
    }
};