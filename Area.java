public class Area {
    float ar; 
    public Area(float a, float b) {
        ar = (a * b) * 0.5f; // Calculate the area and assign it to ar
    }
  public void display() {
        System.out.println("Area of triangle is: " + ar);
    }
    public static void main(String args[]) {
        Area a = new Area(4.5f, 1.5f);
        a.display(); // Display the area
    }
}
