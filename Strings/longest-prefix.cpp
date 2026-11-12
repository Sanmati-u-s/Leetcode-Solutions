class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sort
        // initialize first, last string and ans = ""
        // min length (first and last string)
        // loop till min length, check if first[i] = last[i]; if not equal
        // return ans; if equal add first[i] to ans
        //  return ans
        sort(strs.begin(), strs.end());
        string ans = "";
        string first = strs[0];
        string last = strs[strs.size() - 1];
        int min = std::min(first.size(), last.size());

        for (int i = 0; i < min; i++) {
            if (first[i] != last[i]) {
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};