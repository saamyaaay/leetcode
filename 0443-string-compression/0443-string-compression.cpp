class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        for(int i = 0; i<n ; i++){
            int count = 0;
            int ch = chars[i];
            while(i<n && chars[i]==ch){
              count++;
              i++;
            }
            if(count ==1){
                chars[idx++]= ch;
            }
            else{
                chars[idx++]= ch;
                string str = to_string(count);
                for(int dig : str){
                   chars[idx++]= dig;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
    }
};