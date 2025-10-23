class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        string ans="";
        map<char,int>mpp;
        for(char c:s){
            mpp[c]++;
        }
        while(!mpp.empty()){
            char maxChar=0;
            int maxFreq=0;
            for(auto it:mpp){
                if(it.second>maxFreq || (it.second==maxFreq && it.first<maxChar)){
                    maxFreq=it.second;
                    maxChar=it.first;
                }
            }
            ans+=string(maxFreq,maxChar);

            mpp.erase(maxChar);
        }
        return ans;
    }
};