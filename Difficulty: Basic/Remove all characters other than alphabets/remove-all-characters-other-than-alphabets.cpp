// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z')){
                ans+=s[i];
            }
        }
        if (ans.empty())return "-1";
        return ans;
    }
};