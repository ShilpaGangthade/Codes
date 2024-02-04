/*Q3-Write a program which accept matrix and reverse the contents of each column.
Input -  3  2   5   9
         4  3   2   2
         8  4   1   9
         3  9   7   5
Output - 
         3  9   7   5
         8  4   1   9
         4  3   2   2   
         3  2   5   9
         
*/

import java.util.Scanner;

class A47Q3 
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of rows in the matrix:");
        int rows = sc.nextInt();

        System.out.println("Enter the number of columns in the matrix:");
        int cols = sc.nextInt();

        int[][] matrix = new int[rows][cols];

        System.out.println("Enter the elements of the matrix:");

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        System.out.println("Original Matrix:");
        displayMatrix(matrix, rows, cols);

        System.out.println("Matrix after reversing each column:");
        ReverseCol(matrix, rows, cols);
    }

    static void displayMatrix(int Arr[][], int iRow, int iCol) {
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void ReverseCol(int Arr[][], int iRow, int iCol) {
        for (int j = 0; j < iCol; j++) {
            for (int i = iRow - 1; i >= 0; i--) {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
