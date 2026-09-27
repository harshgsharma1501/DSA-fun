class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> ind;
        string ans = "";

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                ind.push(ans.length());
            }
            else if (s[i] == ')') {
                int start = ind.top();
                ind.pop();

                reverse(ans.begin() + start, ans.end());
            }
            else {
                ans += s[i];
            }
        }

        return ans;
    }
};