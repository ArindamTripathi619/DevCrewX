import java.util.*;

public class InfixToPostfix {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter an expression: ");
        String exp = in.next();
        in.close();
        System.out.println("Postfix expression: \n" + postfix(infix(exp)));
    }

    static ArrayList<String> infix(String exp) {
        ArrayList<String> list = new ArrayList<String>();
        int n = exp.length();
        String temp = "";

        for (int i = 0; i < n; i++) {
            char c = exp.charAt(i);

            if (Character.isDigit(c)) {
                // Collect digits to form a multi-digit number
                while (i < n && Character.isDigit(exp.charAt(i))) {
                    temp += exp.charAt(i);
                    i++;
                }
                list.add(temp); // Add the multi-digit number to the list
                temp = ""; // Reset temp
                i--; // Step back to adjust for the increment in the for loop
            } else {
                // Add operators and parentheses directly
                list.add(Character.toString(c));
            }
        }

        return list;
    }

    static Queue<String> postfix(ArrayList<String> exp) {
        Stack<String> stack = new Stack<>();
        Queue<String> queue = new LinkedList<>();
        int n = exp.size();

        for (int i = 0; i < n; i++) {
            String c = exp.get(i);

            if (isNumber(c)) {
                // If it's a number, add to output
                queue.offer(c);
            } else if (c == "(") {
                // If it's an '(', push to stack
                stack.push(c);
            } else if (c == ")") {
                // If it's a ')', pop until '(' is found
                while (!stack.isEmpty() && stack.peek() != "(") {
                    queue.offer(stack.pop());
                }
                stack.pop(); // Pop the '('
            } else {
                // Operator encountered
                while (!stack.isEmpty() && precedence(stack.peek(), c)) {
                    queue.offer(stack.pop());
                }
                stack.push(c);
            }
        }

        // Pop all remaining operators from the stack
        while (!stack.isEmpty()) {
            queue.offer(stack.pop());
        }

        // // Convert queue to string for output
        // StringBuilder postExp = new StringBuilder();
        // while (!queue.isEmpty()) {
        //     postExp.append(queue.poll());
        // }

        return queue;
    }

    static boolean precedence(String a, String b) {
        // Precedence of operators
        String operators = "-+/*^";
        return operators.indexOf(a) >= operators.indexOf(b);
    }
    static boolean isNumber(String value) {
        try {
            Integer.parseInt(value);
            return true;
        } catch (NumberFormatException e) {
            return false;
        }
    }
}
