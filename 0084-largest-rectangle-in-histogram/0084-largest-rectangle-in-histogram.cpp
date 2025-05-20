class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //next smaller left
        int n = heights.size();
stack<int>s;
vector<int>nse(n);
vector<int>nsl(n);

        nsl[0] = -1;
      s.push(0);
      for(int i = 1; i<n; i++){
        int curr = heights [i];
        while(!s.empty() && curr<=heights[s.top()]){
            s.pop();
        }
        if(s.empty()) {
            nsl[i] = -1;
        }else{
            nsl[i]= s.top();

        }
        s.push(i);
      }
while(!s.empty()){
    s.pop();
}
//next smalles

 s.push(n-1);
  nse[n-1]= n;
  for(int i = n-2; i>=0; i--){
    int curr = heights[i];
    while(!s.empty() && curr<= heights[s.top()]){
        s.pop();
    }
    if(s.empty()){
        nse[i]= n;
    }else{
        nse[i]= s.top();
    }
    s.push(i);
  }

  int maxarea = 0;
  for(int i = 0; i<n ;i++){
    int ht = heights[i];
    int width = nse[i]-nsl[i]-1;
    int area = ht*width;
    maxarea= max (area,maxarea);
  }
  return maxarea;
     }
};