import java.util.Stack;

// Function to check if brackets are balanced
public class ParenthesisMatching {
    public static boolean ispar(String s) {  
        // Declare a stack to hold the previous brackets.
        Stack<Character> stk = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
          
            // Check if the character is an opening bracket
            if (s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '[') {
                stk.push(s.charAt(i)); 
            } 
            else {
              
                // If it's a closing bracket, check if the stack is non-empty
                // and if the top of the stack is a matching opening bracket
                if (!stk.empty() && 
                    ((stk.peek() == '(' && s.charAt(i) == ')') ||
                     (stk.peek() == '{' && s.charAt(i) == '}') ||
                     (stk.peek() == '[' && s.charAt(i) == ']'))) {
                    stk.pop(); 
                }
                else {
                    return false; // Unmatched closing bracket
                }
            }
        }
      
        // If stack is empty, return true (balanced), 
        // otherwise false
        return stk.empty();
    }

    public static void main(String[] args) {
        String s = ")6*4-5)";
        if (ispar(s))
            System.out.println("true");
        else
            System.out.println("false");
    }
}