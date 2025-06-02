class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>m;
        int left = 0; int right = 0;
        int maxfreq=0;
        int maxlength = 0;
        int n = s.size();
        for(right = 0 ; right <n ;right++){
            char ch = s[right];
            m[ch]++;
         maxfreq = max(maxfreq,m[ch]);
         int ws= right-left+1;
        int charschange = ws-maxfreq;

        if(charschange>k){
            m[s[left]]--;
            left++;
        }
        maxlength = max (maxlength , right-left+1);
        
        }
        return maxlength;
    }
};