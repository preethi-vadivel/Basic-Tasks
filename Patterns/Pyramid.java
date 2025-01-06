import java.util.Scanner;

public class Pyramid{
    static void pattern(int n){
		for(int i=0;i<n;i++) {
			 
			for(int s=0;s<(n-1)-i;s++) {
				System.out.print(" ");
			}
			for(int j=0;j<(i*2+1);j++) {
				System.out.print("*");
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
 *  Pyramid Pattern:
 * 
 *  Input: 6
 * 
 *  Output: 
 * 
 *			*       
 *		   ***
 *		  *****
 *		 *******
 *		*********
 *	   ***********
 * 
 */