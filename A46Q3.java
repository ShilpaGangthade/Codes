/*Q3-Write a program which accept matrix and return largest number from both the diagonals.
Input -  3  2   5   9
         4  3   2   2
         8  4   1   9
         3  9   7   5
Output - 9 */

import java.util.Scanner;

class A46Q3 
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

        int maxDiagonal1 = findMaxDiagonal1(matrix);
        int maxDiagonal2 = findMaxDiagonal2(matrix);

        int result = Math.max(maxDiagonal1, maxDiagonal2);

        System.out.println("The largest number from both diagonals is: " + result);
    }

    // Function to find the largest number from the main diagonal (top-left to bottom-right)
    private static int findMaxDiagonal1(int[][] matrix) {
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < matrix.length; i++) {
            if (i < matrix[i].length) {
                max = Math.max(max, matrix[i][i]);
            }
        }
        return max;
    }

    // Function to find the largest number from the other diagonal (top-right to bottom-left)
    private static int findMaxDiagonal2(int[][] matrix) {
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < matrix.length; i++) {
            int j = matrix[i].length - 1 - i;
            if (j >= 0) {
                max = Math.max(max, matrix[i][j]);
            }
        }
        return max;
    }
}
