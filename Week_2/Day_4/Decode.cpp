class Solution {
public:
    string decodeString(string s) {
        while (s.find(']') != string::npos) {

            int close = s.find(']');
            int open = close;

            while (s[open] != '[') {
                open--;
            }

            string part = s.substr(open + 1, close - open - 1);

            int start = open - 1;
            while (start >= 0 && isdigit(s[start])) {
                start--;
            }

            int k = stoi(s.substr(start + 1, open - start - 1));

            string repeat = "";
            for (int i = 0; i < k; i++) {
                repeat += part;
            }

            s = s.substr(0, start + 1) +
                repeat +
                s.substr(close + 1);
        }

        return s;
    }
};
