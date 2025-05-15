class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen =0;
       for(int i = 0; i<s.length(); i++){
        unordered_map<char,int>hash;
        for(int j = i ; j<s.length(); j++){
          if(hash[s[j]]==1){
            break;
          }
          hash[s[j]]=1;
          int length = j-i+1;
        maxlen = max (maxlen,length);
        }
       }
 return maxlen;
    }
};