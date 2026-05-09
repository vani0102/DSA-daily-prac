/*Take the first string as reference.

Compare its characters with all other strings:

If characters match → continue
If mismatch found → return prefix till there*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";

        for(int i = 0; i < strs[0].size(); i++) {

            char ch = strs[0][i];

            for(int j = 1; j < strs.size(); j++) {

                // Out of bounds OR mismatch
                if(i >= strs[j].size() || strs[j][i] != ch) {
                    return ans;
                }
            }

            ans += ch;
        }

        return ans;
    }
};



//ALTERNATIVE METHOD : USING SORT >>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        string ans = "";

        for(int i = 0; i < first.size(); i++) {

            if(first[i] != last[i]) {
                break;
            }

            ans += first[i];
        }

        return ans;
    }
};
