class Solution {
public:
    int totalNumbers(vector<int>& d) {
         int freq[10] = {0}, cnt = 0;
    for (int x : d) freq[x]++;

    for (int num = 100; num <= 998; num += 2) {
        int a = num / 100, b = (num / 10) % 10, c = num % 10;
        int tmp[10] = {0};
        tmp[a]++, tmp[b]++, tmp[c]++;
        
        bool valid = true;
        for (int i = 0; i < 10; i++)
            if (tmp[i] > freq[i]) valid = false;

        if (valid) cnt++;
    }
    return cnt;
    }
};