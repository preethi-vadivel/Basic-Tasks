import java.util.Scanner;

public class Decreasing {
    static void pattern(int n){
       for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            System.out.print("* ");
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
 *  Decreasing Triangle Pattern:
 * 
 *  Input : 6
 * 
 *  Output :
 * 
 *      * * * * * *
 *      * * * * *
 *      * * * *
 *      * * *
 *      * *
 *      *
 * 
 */