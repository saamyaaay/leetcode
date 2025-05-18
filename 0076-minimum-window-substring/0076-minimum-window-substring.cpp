
class Solution {
public:
    string minWindow(string s, string t) {
  unordered_map<char,int>se;
  unordered_map<char,int>tt;
  int n = s.size(); int m = t.size();
  for(int i = 0; i<m ; i++){
    tt[t[i]]++;
  }
  int left = 0;
  int right = 0;
  int count = 0;
  int start = -1;
  int required = tt.size();
  int minlength =INT_MAX;
  for(int right = 0; right<n ; right++){
   char c = s[right];
   se[c]++;

   if(tt.count(c)&& se[c]==tt[c] ){
    count++;
   }
   while (count==required){
    if (right-left+1<minlength){
        minlength = right-left+1;
        start=left;
    }
    char lefty= s[left];
    se[lefty]--;
    if(tt.count(lefty) && se[lefty]<tt[lefty]){
        count--;
    }
left++;
   }
  }
  if(minlength ==INT_MAX) return "";
  return s.substr(start,minlength);
    }
};