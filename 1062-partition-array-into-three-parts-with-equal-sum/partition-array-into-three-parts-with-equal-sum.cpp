class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;

        for (auto& i : arr) {
            sum += i;
        }

        if (sum % 3 != 0)
            return false;

        int req = sum / 3;
        int curr = 0, parts = 0;

        for (int i = 0; i < arr.size(); i++) {
            curr += arr[i];

            if (curr == req) {
                parts++;
                curr = 0;

                if (parts == 2 && i < arr.size() - 1)
                    return true;
            }
        }
        return false;
    }
};