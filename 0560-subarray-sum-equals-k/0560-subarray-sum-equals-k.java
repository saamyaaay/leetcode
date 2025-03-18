import java.util.HashMap;
import java.util.Map;

class Solution {
    public int subarraySum(int[] nums, int k) {
        Map<Integer, Integer> psc = new HashMap<>();
        psc.put(0, 1); // Initialize with sum 0 occurring once
        int presum = 0;
        int co = 0;

        for (int num : nums) {
            presum += num; // Calculate the prefix sum

            // Check if (presum - k) is present in the map
            if (psc.containsKey(presum - k)) {
                co += psc.get(presum - k);
            }

            // Update the prefix sum count in the map
            psc.put(presum, psc.getOrDefault(presum, 0) + 1);
        }
        return co;
    }
}
