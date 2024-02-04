/*Q5-Write a program which accept matrix and swap the contents of consecutive rows.
Input -  3  2   5   9
         4  3   2   2
         8  4   1   9
         3  9   7   5
Output - 
         4  3   2   2
         3  2   5   9
         3  9   7   5
         8  4   1   9
         
*/

import java.util.Scanner;

class A46Q5 
{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of rows:");
        int rows = scanner.nextInt();

        System.out.println("Enter the number of columns:");
        int cols = scanner.nextInt();

        int[][] matrix = new int[rows][cols];

        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        swapConsecutiveRows(matrix);

        System.out.println("Matrix after swapping consecutive rows:");
        printMatrix(matrix);
    }

    // Function to swap the contents of consecutive rows in the matrix
    private static void swapConsecutiveRows(int[][] matrix) {
        int rows = matrix.length;
        for (int i = 0; i < rows - 1; i += 2) {
            int[] temp = matrix[i];
            matrix[i] = matrix[i + 1];
            matrix[i + 1] = temp;
        }
    }

    // Function to print the matrix
    private static void printMatrix(int[][] matrix) {
        for (int[] row : matrix) {
            for (int element : row) {
                System.out.print(element + " ");
            }
            System.out.println();
        }
    }
}
