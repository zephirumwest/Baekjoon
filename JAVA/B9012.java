package JAVA;
import java.util.Scanner;
import java.util.Stack;

public class B9012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Stack<String> stackStr = new Stack<>(); 
        for(int i=0; i<n; i++){
            String s = sc.next();
            int j = 0;
            while (s.charAt(j) == '('){
                stackStr.push(s.charAt(j));
                j = j+1;
            }
        }
    }
}
