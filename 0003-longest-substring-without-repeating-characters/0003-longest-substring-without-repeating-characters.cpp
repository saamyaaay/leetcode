class Solution {
public:
    int lengthOfLongestSubstring(string s) {
int maxlength = 0;
int left = 0;
int right = 0;
unordered_map<char,int>sam;
int count = 0;
for(int right = 0 ; right < s.size() ; right++ ){
    char ch= s[right];
    sam[ch]++;
    while(sam[ch]>1){
        sam[s[left]]--;
        left++;
    }
  maxlength = max (maxlength , right-left+1);

    }
    return maxlength;
}

    
};