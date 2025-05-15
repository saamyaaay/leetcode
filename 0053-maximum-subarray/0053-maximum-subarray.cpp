class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maxSum = INT_MIN;
        // int currentSum = 0;
        
        // for (int i = 0; i < nums.size(); i++) {
        //     currentSum += nums[i];
            
        //     if (currentSum > maxSum) {
        //         maxSum = currentSum;
        //     }
            
        //     if (currentSum < 0) {
        //         currentSum = 0;
        //     }
        // }
        
        // return maxSum;
        int maxsum = INT_MIN;
        int curr = 0;
        for(int i =0; i<nums.size(); i++){
            curr+=nums[i];
        
        if(curr>maxsum){
            maxsum = curr;
        }
        if (curr<0){
            curr = 0;

        }
        }
       return maxsum;
    }
};