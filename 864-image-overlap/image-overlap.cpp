class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> listA;
        vector<pair<int, int>> listB;
        map<pair<int, int>, int> freq;
        int ans=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img1[i][j] == 1) {
                    listA.push_back({i, j});
                }
                if (img2[i][j] == 1) {
                    listB.push_back({i, j});
                }
            }
        }
        for (auto& p : listA) {
            for (auto& q : listB) {
                int x1 = p.first, y1 = p.second;
                int x2 = q.first, y2 = q.second;
                int dx = x2 - x1;
                int dy = y2 - y1;

                freq[{dx, dy}]++;

                ans = max(ans, freq[{dx, dy}]);
            }
        }
        return ans;
    }
};