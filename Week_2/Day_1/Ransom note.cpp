class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};

        // Count characters in magazine
        for (int i = 0; i < magazine.length(); i++) {
            count[magazine[i] - 'a']++;
        }

        // Check ransomNote
        for (int i = 0; i < ransomNote.length(); i++) {
            if (count[ransomNote[i] - 'a'] == 0) {
                return false;
            }
            count[ransomNote[i] - 'a']--;
        }

        return true;
    }
};
