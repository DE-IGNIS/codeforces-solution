import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class A339_Helpful {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        ArrayList<Integer> nums = new ArrayList<>();

        for (char c : s.toCharArray()) {
            if (c != '+') {
                nums.add(c - '0');
            }
        }

        Collections.sort(nums);

        for (int i = 0; i < nums.size(); i++) {
            System.out.print(nums.get(i));
            if (i != nums.size() - 1) {
                System.out.print("+");
            }
        }

        sc.close();
    }
}
