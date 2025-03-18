class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> set = new HashSet<>();
        int le=0;
        int maxen =0;
        for(int ri =0; ri<s.length(); ri++ ){
            while (set.contains(s.charAt(ri))){
                set.remove(s.charAt(le));
                le++;
            }
            set.add(s.charAt(ri));
            maxen = Math.max(maxen, ri-le+1);
        }
        return maxen;
    }
}