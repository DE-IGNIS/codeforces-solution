import java.util.Scanner;

public class B1985_Multiple_Sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            if (n == 3)
                System.out.println(3);
            else
                System.out.println(2);
        }

        sc.close();
    }
}
