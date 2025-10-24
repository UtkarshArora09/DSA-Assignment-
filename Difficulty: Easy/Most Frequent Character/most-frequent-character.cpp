class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        int n=s.length();
        map<int,char>mpp;
        for(char c:s){
            mpp[c]++;
        }
        int maxCount=0;
        char maxChar='\0';
        for(auto it:mpp){
            if(it.second>maxCount){
                maxCount=it.second;
                maxChar=it.first;
            }
        }
        return maxChar;
        
    }
};