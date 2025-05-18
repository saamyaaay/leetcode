class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        long long sum = 0, maxsum = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            map[nums[right]]++;
            sum += nums[right];

            // Shrink the window if size exceeds k
            if (right - left + 1 > k) {
                map[nums[left]]--;
                sum -= nums[left];
                if (map[nums[left]] == 0) {
                    map.erase(nums[left]);
                }
                left++;
            }

            // Check if it's a valid window
            if (right - left + 1 == k && map.size() == k) {
                maxsum = max(maxsum, sum);
            }
        }

        return maxsum;
    }
};
