import java.util.Scanner;

class Triangle {
    private float base, height, area;

    public Triangle(float b, float h) {
        base = b;
        height = h;
        area = 0.5f * base * height;
    }

    public void displayArea() {
        System.out.println("The area of the triangle is " + area);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the base and height of the triangle: ");
        float b = input.nextFloat();
        float h = input.nextFloat();
        Triangle t = new Triangle(b, h);
        t.displayArea();
        input.close();
    }
}
T
