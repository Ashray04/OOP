import java.util.Scanner;

public class SumOf {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[100];
        int n, sum = 0;

        System.out.print("Enter size of array: ");
        n = scanner.nextInt();
        System.out.print("Enter the elements for array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
            sum += arr[i];
        }
        System.out.println("The sum of the elements is: " + sum);
    }
}
