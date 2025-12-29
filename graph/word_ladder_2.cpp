#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> findLadders(
        string beginWord,
        string endWord,
        vector<string>& wordList
    ) {
        set<string> st(wordList.begin(), wordList.end());

        queue<vector<string>> q;
        q.push({beginWord});

        vector<string> usedLevel;
        usedLevel.push_back(beginWord);

        vector<vector<string>> ans;
        int level = 1;

        // If endWord not present, no answer
        if (st.find(endWord) == st.end())
            return ans;

        while (!q.empty()) {
            vector<string> arr = q.front();
            q.pop();

            // Level change detected
            if (arr.size() > level) {
                level = arr.size();
                for (auto &it : usedLevel) {
                    st.erase(it);
                }
                usedLevel.clear();
            }

            string str = arr.back();

            // Found endWord
            if (str == endWord) {
                if (ans.empty()) {
                    ans.push_back(arr);
                }
                else if (ans[0].size() == arr.size()) {
                    ans.push_back(arr);
                }
                continue; // no need to extend this path further
            }

            // Try all transformations
            for (int i = 0; i < str.size(); i++) {
                char original = str[i];
                for (char c = 'a'; c <= 'z'; c++) {
                    str[i] = c;
                    if (st.find(str) != st.end()) {
                        arr.push_back(str);
                        q.push(arr);
                        usedLevel.push_back(str);
                        arr.pop_back();
                    }
                }
                str[i] = original;
            }
        }

        return ans;
    }
};
