
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
	          String s = in.next();
	          char []x = s.toCharArray();
	          int u = 0,l = 0;
	          for(int i = 0; i < x.length; i++)
	          {
	              if(Character.isUpperCase(x[i])) u++;
	              else l++;
	          }
	          if(u > l) System.out.println(s.toUpperCase());
        else System.out.println(s.toLowerCase());
    }
}