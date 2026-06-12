class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int index = 0;

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            chars[index++] = curr;

            if (count > 1) {
                string cnt = to_string(count);

                for (int j = 0; j < cnt.size(); j++) {
                    chars[index++] = cnt[j];
                }
            }
        }

        return index;
    }
};
