class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int cnt=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
                cnt++;
            } else if(s[i]==')'){
                st.pop();
                ans=max(ans,cnt);
                cnt--;
            }
            
        }
        return ans;
    }
};