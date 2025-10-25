class Solution {
public:
    int helper(int num,int original){
        if(num==0)return 0;
        int digit=num%10;
        int count=0;
        if(digit!=0 && original % digit==0){
            count=1;
        }
        return count+helper(num/10,original);
    }
    int countDigits(int num) {
        return helper(num,num);
    }
};