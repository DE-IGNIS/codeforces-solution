import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();   
        int summ =  0 ; 
        int count = 0 ;
        
        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
 
            summ = a + b + c ;
            
            if (summ >= 2){
                count ++ ; 
            }    
        }
        System.out.println(count);
        sc.close();
    }
}