/*
* Copyright Rohit Das (C) 2017
* To generate a magic square
*/
import java.util.*;
 
class Magic
{
    // Function to generate odd sized magic squares
    static void generateSquare(int n) {
        int[][] magicSquare = new int[n][n];         
        // Initialize position for 1
        int i = n/2;     int j = n-1;
        // One by one put all values in magic square
        for (int num=1; num <= n*n; ) {
            if (i==-1 && j==n) {
                j = n-2;    i = 0;
            }
            else {
                if (j == n)    j = 0;
                if (i < 0)    i=n-1;
            }
            if (magicSquare[i][j] != 0) 
            {
                j -= 2;    i++;
                continue;
            }
            else    magicSquare[i][j] = num++; 
            j++;  i--; 
        }
  
        // print magic square
        System.out.println("Magic Square for "+n+":");
        System.out.println("Sum of each row/column: "+n*(n*n+1)/2+":");
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++)  System.out.print(magicSquare[i][j]+"\t");
            System.out.println();
        }
    }
     
    // driver program
    public static void main (String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of magic square to generate:");
        int n;    n = sc.nextInt();
        generateSquare(n);
    }
}