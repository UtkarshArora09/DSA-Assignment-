// Recursive approach
class Solution {
public:
    int helper(vector<int>&nums,int idx,int leftSum,int totalSum){
        if(idx==nums.size())return -1;
        int rightSum=totalSum-leftSum-nums[idx];
        if(rightSum==leftSum)return idx;
        return helper(nums,idx+1,leftSum+nums[idx],totalSum);

    }
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        return helper(nums,0,0,totalSum);
    }
};

// Two Pointer approach 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
