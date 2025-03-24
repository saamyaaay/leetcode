import java.util.Stack;

class Solution {
    public boolean isValid(String s) {
        // Stack<Character> stack = new Stack<>();
        
        // for (char ch : s.toCharArray()) {
        //     if (ch == '(' || ch == '{' || ch == '[') {
        //         stack.push(ch);
        //     } else {
        //         if (stack.isEmpty()) return false; // No opening bracket for closing bracket
                
        //         char top = stack.pop();
        //         if ((ch == ')' && top != '(') || 
        //             (ch == '}' && top != '{') || 
        //             (ch == ']' && top != '[')) {
        //             return false;
        //         }
        //     }
        // }
        
        // return stack.isEmpty(); // Stack should be empty if all brackets are matched

        Stack<Character>str= new Stack<>();
       
        for(int i = 0 ; i<s.length(); i++){
             char ch= s.charAt(i);
            if (ch=='(' || ch=='[' || ch=='{'){
                str.push(ch);
            }
            else{
                if(str.isEmpty()){
                    return false;
                }
                char top= str.pop();
                if((ch==')'&& top !='(') || (ch==']' && top !='[') || (ch=='}' && top != '{') ){
                    
                    return false;
                }
            }
        }
        return str.isEmpty();

    }
}
