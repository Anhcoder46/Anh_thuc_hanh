
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a, b = 0, c = 0;
        for(int i = 0;i < n; i++)
        {
            a = in.nextInt();
            if(a != b)c++;
            b = a;
        }
        System.out.println(c);	
    }
}
