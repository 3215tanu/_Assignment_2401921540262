class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> n;
        queue<int> Q;

        for (int i = 0; i < s.length(); i++) {
            n[s[i]]++;  // increment count every time

            if (n[s[i]] == 1) {  // first occurrence
                Q.push(i);
            }

            while (!Q.empty() && n[s[Q.front()]] > 1) {
                Q.pop();
            }
        }

        return Q.empty() ? -1 : Q.front();
    }
};
