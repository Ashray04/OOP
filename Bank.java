import java.util.Scanner;

class Bank {
    String bankName;
    long accNo;
    String typeOfAcc;
    float balance;
    int amount;

    public void getInfo() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter Bank Name: ");
        bankName = input.nextLine();
        System.out.println("Enter Account Number: ");
        accNo = input.nextLong();
        input.nextLine(); // consume newline character
        System.out.println("Enter Type Of Account: ");
        typeOfAcc = input.nextLine();
        System.out.println("Enter Balance: ");
        balance = input.nextFloat();
        System.out.println("Enter Amount: ");
        amount = input.nextInt();
    }

    public void displayInfo() {
        System.out.println("Bank Name: " + bankName);
        System.out.println("Account Number: " + accNo);
        System.out.println("Type Of Account: " + typeOfAcc);
        System.out.println("Balance: " + balance);
        System.out.println("Amount you want to be credited or debited: " + amount);
    }

    public void credit() {
        float credit = balance + amount;
        System.out.println("Total amount after credited: " + credit);
    }

    public void debit() {
        float debit;
        if ((balance > amount) && (balance > 2000)) {
            System.out.println("You can withdraw the amount");
            debit = balance - amount;
            System.out.println("Total balance after the withdrawal: " + debit);
        } else {
            System.out.println("You have insufficient amount in your account");
        }
    }

    public static void main(String[] args) {
        Bank b1 = new Bank();
        b1.getInfo();
        b1.displayInfo();
        b1.credit();
        b1.debit();
    }
}
