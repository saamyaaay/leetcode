class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxlength=0;
        unordered_map<char,int>m;
        int n = s.size();
        for( right = 0; right<n ; right++){
            int ch = s[right];
           m[ch]++;
        
        while(m[ch]>1){
            m[s[left]]--;
            left++;
        }
maxlength = max(maxlength,right-left+1);
    }
    return maxlength;
}
};