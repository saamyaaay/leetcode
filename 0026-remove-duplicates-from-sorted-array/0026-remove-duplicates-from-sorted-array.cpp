class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
    unordered_set <int>seen ;
    int index=0 ; 
    for(int i =0 ; i<n ; i++){
       if(seen.find(nums[i])==seen.end()){
        seen.insert(nums[i]);
        nums[index++] =nums[i];
       }
    }
    return index;

    }
};