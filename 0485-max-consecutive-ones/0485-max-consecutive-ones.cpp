class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0;
        int count = 0;
        for(int num : nums){
            if(num ==1){
                count++;
                maxcount = max(count, maxcount);
            }
        
        else{
            count = 0;
        }
    }
    return maxcount;
    }
};