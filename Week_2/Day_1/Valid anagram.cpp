class Solution {
public:
        
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) 
        {
             return false;
         } 
          unordered_map<char, int> mp;

        // Count characters in s
        for (int  i =0;i<s.length();i++) {
            mp [s[i]]++;
        }

        // Decrease count using t
        for (int i =0;i<t.length();i++) {
            if (mp.find(t[i]) == mp.end()) {
                return false;
            }

            mp[t[i]]--;

            if (mp[t[i]] < 0) {
                return false;
            }
        }

         
       return true; 
    }
};
