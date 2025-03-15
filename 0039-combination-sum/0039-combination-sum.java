
class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        findCombinations(0, candidates, target, new ArrayList<>(), ans);
        return ans;
    }
    
    private void findCombinations(int index, int[] candidates, int target, List<Integer> current, List<List<Integer>> ans) {
        // Base Case: Target achieved
        if (target == 0) {
            ans.add(new ArrayList<>(current));
            return;
        }

        // Base Case: Exceeding target or end of array
        if (index == candidates.length || target < 0) {
            return;
        }

        // Pick the current element
        if (candidates[index] <= target) {
            current.add(candidates[index]);
            // Recursively call with the same index to allow repetition
            findCombinations(index, candidates, target - candidates[index], current, ans);
            // Backtrack: remove the last added element
            current.remove(current.size() - 1);
        }

        // Not pick the current element and move to the next element
        findCombinations(index + 1, candidates, target, current, ans);
    }
}
