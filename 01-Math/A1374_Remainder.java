import java.util.Scanner;

public class A1374_Remainder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            long x, y, n;
            x = sc.nextLong();
            y = sc.nextLong();
            n = sc.nextLong();

            long k = n - (n - y) % x;
            System.out.println(k);
        }

        sc.close();
    }
}
