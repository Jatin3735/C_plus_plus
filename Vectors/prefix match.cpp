#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string prefix = strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<prefix.size() && j<strs[i].size() && prefix[j]==strs[i][j]){
                j++;
            }
            prefix = prefix.substr(0,j);
            if(prefix == "") return "";
        }
        return prefix;
    }
};
int main(){
    Solution obj;
    vector<string> strs = {"flower", "flow", "flight"};
    cout<<obj.longestCommonPrefix(strs);
    return 0;
}
