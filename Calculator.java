import java.util.Scanner;

class Calculator {
    public void getInfo() {
        Scanner input = new Scanner(System.in);
        int a, b, i;
        System.out.print("Enter Number 1: ");
        a = input.nextInt();
        System.out.print("\nEnter Number 2: ");
        b = input.nextInt();
        do {
            System.out.println("\nEnter 1 for 'Addition'");
            System.out.println("Enter 2 for 'Subtraction'");
            System.out.println("Enter 3 for 'Multiplication'");
            System.out.println("Enter 4 for 'Division'");
            System.out.println("Enter 0 for Exit");
            System.out.print("\nEnter your choice: ");
            i = input.nextInt();
            switch (i) {
                case 0:
                    break;
                case 1:
                    System.out.println("\n" + a + " + " + b + " = " + (a + b));
                    break;
                case 2:
                    System.out.println("\n" + a + " - " + b + " = " + (a - b));
                    break;
                case 3:
                    System.out.println("\n" + a + " * " + b + " = " + (a * b));
                    break;
                case 4:
                    if (b != 0)
                        System.out.println("\n" + a + " / " + b + " = " + ((float) a / b));
                    else
                        System.out.println("Cannot divide by zero");
                    break;
                default:
                    System.out.println("\nEnter valid option");
            }
        } while (i != 0);
    }

    public static void main(String[] args) {
        Calculator c1 = new Calculator();
        c1.getInfo();
    }
}
