#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string> st; //to store the unique elements only
        for(auto it:wordList){
            st.insert(it);
        }
        queue<pair<string , int>> q; //we will store the closest matched word along with the level of change
        q.push({beginWord,1});
        st.erase(beginWord);
        while(!q.empty()){
            pair<string,int> p=q.front();
            q.pop();
            string str=p.first;
            int level=p.second;
            if(str==endWord) return level;
            for(int i=0;i<beginWord.size();i++){
                char orginal=str[i];
                for(char j='a';j<='z';j++){
                    str[i]=j;
                    if(st.find(str)!=st.end()){
                        st.erase(str);
                        q.push({str,level+1});
                    }
                }
                str[i]=orginal; //convert back to original 
            }

        }
        return 0;
    }
};