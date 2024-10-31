import java.util.*;

public class ExpressionToInfixList {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the expression: ");
        String exp = in.next();
        System.out.println("The array is: \n" + infix(exp));
        in.close();
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
}
