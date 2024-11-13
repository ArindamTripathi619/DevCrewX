public class WillanFormulaOfPrimes {
    public static void main(String[] args) {
        int n = 6;
        System.out.println("Result: " + willanPrime(n));
        // This works only till 6.
        // After that this returns wrong results.
        // This is most probably due to the large numbers that the factorial function returns.
        // The factorial function returns very large numbers for large inputs, of which it is very hard to compute the cosine.
    }

    private static int willanPrime(int n) {
        double result = 1;
        for (int i = 1; i < (int)Math.pow(2,n); i++) {
            result += Math.floor(Math.pow((n/sum(i)),(1.0/n)));
        }
        return (int)result;
    }

    private static double sum(int i) {
        double result = 0;
        for (int j = 1; j <= i; j++) {
            result += Math.floor(Math.pow(Math.cos(Math.PI*((factorial(j-1)+1)/j)),2));
        }
        return result;
    }

    private static double factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n-1);
        }
    }
}
