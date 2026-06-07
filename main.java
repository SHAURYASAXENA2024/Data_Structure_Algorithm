import java.util.Scanner;

public class main {
    public static void main(String[] args) {

        int n;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter integers (negative number to stop):");

        while (true) {
            System.out.print("Enter a number: ");
            n = sc.nextInt();

            if (n < 0) {
                System.out.println("Negative number entered. Stopping...");
                break;  // exit loop when negative number is entered
            }

            System.out.println("You entered: " + n);
        }

        sc.close();
        System.out.println("Program ended.");
    }
}
