class Solution {
public:
    string reverseWords(string s) {
        string rev = "";
        string word = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                
                for (int j = word.length() - 1; j >= 0; j--) {
                    rev += word[j];
                }
                rev += ' ';
                word = "";
            }
        }

        for (int j = word.length() - 1; j >= 0; j--) {
            rev += word[j];
        }

        return rev;
    }
};
