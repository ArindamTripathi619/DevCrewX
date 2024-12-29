import java.util.*;

public class PostfixStackEvaluator {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter an infix expression: ");
        String exp = in.next();
        in.close();

        ArrayList<String> infixExp = infix(exp);
        Queue<String> postfixExp = postfix(infixExp);
        System.out.println("Evaluated result: \n" + postfixEvaluator(postfixExp));
    }

    static double postfixEvaluator(Queue<String> postFix) {
        Stack<Double> stack = new Stack<>();

        while (!postFix.isEmpty()) {
            String c = postFix.poll();

            if (isNumber(c)) {
                // If it's a number, push to stack
                stack.push(Double.parseDouble(c));
            } else {
                // If it's an operator, pop two numbers from stack and perform operation
                double operand2 = stack.pop();
                double operand1 = stack.pop();
                double result = performOperation(operand1, operand2, c);
                stack.push(result);
            }
        }

        // Return the final result
        return stack.pop();
    }

    static double performOperation(double operand1, double operand2, String operator) {
        switch (operator) {
            case "+":
                return operand1 + operand2;
            case "-":
                return operand1 - operand2;
            case "*":
                return operand1 * operand2;
            case "/":
                return operand1 / operand2;
            case "^":
                return Math.pow(operand1, operand2);
            default:
                throw new IllegalArgumentException("Invalid operator: " + operator);
        }
    }

    static ArrayList<String> infix(String exp) {
        ArrayList<String> list = new ArrayList<>();
        int n = exp.length();
        String temp = "";

        for (int i = 0; i < n; i++) {
            char c = exp.charAt(i);

            if (Character.isDigit(c)||c == '.') {
                // Collect digits to form a multi-digit number
                while (i < n && (Character.isDigit(exp.charAt(i)) || exp.charAt(i) == '.')) {
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
            } else if (c.equals("(")) {
                // If it's an '(', push to stack
                stack.push(c);
            } else if (c.equals(")")) {
                // If it's a ')', pop until '(' is found
                while (!stack.isEmpty() && !stack.peek().equals("(")) {
                    queue.offer(stack.pop());
                }
                if (!stack.isEmpty()) stack.pop(); // Pop the '('
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

        return queue;
    }

    static boolean precedence(String a, String b) {
        // Define precedence values for operators
        Map<String, Integer> precedenceMap = new HashMap<>();
        precedenceMap.put("+", 1);
        precedenceMap.put("-", 1);
        precedenceMap.put("*", 2);
        precedenceMap.put("/", 2);
        precedenceMap.put("^", 3);

        return precedenceMap.getOrDefault(a, 0) >= precedenceMap.getOrDefault(b, 0);
    }

    static boolean isNumber(String value) {
        try {
            Double.parseDouble(value);
            return true;
        } catch (NumberFormatException e) {
            return false;
        }
    }
}
