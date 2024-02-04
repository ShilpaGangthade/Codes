/*Q1-Write a program which accept matrix from user and display transpose of the matrix.
The transpose of a given matrix is formed by interchanging the rows and columns of a matrix.
Input -  3  2   5   9
         4  3   2   2
         8  4   1   9
         3  9   7   5
Output - 
         3  4   8   3
         2  3   4   9
         5  2   1   7
         9  2   5   5
         
*/

import java.util.Scanner;

class A47Q1
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

        System.out.println("Transpose of the Matrix:");
        Transpose(matrix, rows, cols);
    }

    static void displayMatrix(int Arr[][], int iRow, int iCol) {
        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                System.out.print(Arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void Transpose(int Arr[][], int iRow, int iCol) {
        for (int i = 0; i < iCol; i++) {
            for (int j = 0; j < iRow; j++) {
                System.out.print(Arr[j][i] + " ");
            }
            System.out.println();
        }
    }
}
