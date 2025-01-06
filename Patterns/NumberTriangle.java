import java.util.Scanner;

public class NumberTriangle {
    static void pattern(int n){
       for(int i=1;i<=n;i++){
           for(int j=1;j<i+1;j++){
               System.out.print(j+" ");
           }
           System.out.println();
       }
    }
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       System.out.println("Enter the input:");
       int num = in.nextInt();
       pattern(num);

       in.close();
    }
}

/*
 * Number Triangle Pattern
 *  
 * Input : 5
 * 
 * Output:
 *  1
 *  1 2
 *  1 2 3 
 *  1 2 3 4
 *  1 2 3 4 5
 * 
 */