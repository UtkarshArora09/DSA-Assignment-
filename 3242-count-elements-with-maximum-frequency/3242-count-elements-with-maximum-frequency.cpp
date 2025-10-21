class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int maxFreq=0,result=0;
        for(int n: nums){
            mpp[n]++;
            maxFreq=max(maxFreq,mpp[n]);
        }
        for(auto p:mpp){
            if(p.second==maxFreq){
                result+=p.second;
            }
        }
        return result;
    }
};