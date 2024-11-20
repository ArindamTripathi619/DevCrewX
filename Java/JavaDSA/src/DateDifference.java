import java.util.Scanner;

public class DateDifference {

    public static boolean isLeapYear(int year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        }
        return false;
    }

    public static int daysInMonth(int month, int year) {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                return isLeapYear(year) ? 29 : 28;
            default:
                return 0;
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the first date
        System.out.println("Enter the first date (dd mm yyyy): ");
        int day1 = scanner.nextInt();
        int month1 = scanner.nextInt();
        int year1 = scanner.nextInt();

        // Input the second date
        System.out.println("Enter the second date (dd mm yyyy): ");
        int day2 = scanner.nextInt();
        int month2 = scanner.nextInt();
        int year2 = scanner.nextInt();

        // Normalize the dates (ensuring date1 <= date2)
        if (year1 > year2 || (year1 == year2 && month1 > month2) || (year1 == year2 && month1 == month2 && day1 > day2)) {
            int temp = day1;
            day1 = day2;
            day2 = temp;

            temp = month1;
            month1 = month2;
            month2 = temp;

            temp = year1;
            year1 = year2;
            year2 = temp;
        }

        int totalYears = year2 - year1;
        int totalMonths = month2 - month1;
        int totalDays = day2 - day1;

        // Adjust for negative days
        if (totalDays < 0) {
            totalMonths--;
            totalDays += daysInMonth(month1, year1);
        }

        // Adjust for negative months
        if (totalMonths < 0) {
            totalYears--;
            totalMonths += 12;
        }

        // Print the result
        System.out.println("Difference: ");
        System.out.println("Years: " + totalYears);
        System.out.println("Months: " + totalMonths);
        System.out.println("Days: " + totalDays);

        scanner.close();
    }
}
