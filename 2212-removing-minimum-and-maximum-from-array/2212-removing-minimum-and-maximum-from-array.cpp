class Solution {
public:
    int minimum(vector<int>&nums){
        int mini=INT_MAX;
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
                idx=i;
            }
        }
        return idx;
    }
    int maximum(vector<int>&nums){
        int maxi=INT_MIN;
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                idx=i;
            }
        }
        return idx;
    } 
    int minimumDeletions(vector<int>& nums) {
        int maxIdx=maximum(nums);
        int n=nums.size();
        int minIdx=minimum(nums);
        if(minIdx>maxIdx)swap(minIdx,maxIdx);
        int option_1=maxIdx+1;
        int option_2=n-minIdx;
        int option_3=(minIdx+1)+(n-maxIdx);
        return min({option_1,option_2,option_3});
    }
};