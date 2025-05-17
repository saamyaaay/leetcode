class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
       
        for(int i = 0; i<s.size(); i++)
        {
                char ch = s[i];
            if(!st.empty()&& st.top() == ch){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
            string ans;
            while (!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
            
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};