import java.util.Scanner;

public class A734_AntonAndDanik {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        int a = 0, d = 0;
        for (char c : s.toCharArray()) {
            if (c == 'A')
                a++;
            else if (c == 'D')
                d++;
        }
        if (a > d)
            System.out.println("Anton");
        else if (d > a)
            System.out.println("Danik");
        else
            System.out.println("Friendship");

        sc.close();
    }
}
