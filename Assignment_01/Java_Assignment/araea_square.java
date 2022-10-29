import java.util.Scanner;

public class area_square {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter Side of Square: ");

    double side = scanner.nextDouble();
    double area = side*side;
    System.out.println("Area of Square is " + area);
  }
}
