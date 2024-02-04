/*Q2-Write a program which accept matrix and one number from user and return frequency of that number.
Input -  3  2   5   9
         4  3   2   2
         8  4   1   9
         3  9   7   5
Number - 9
Output - 3 */

import java.util.Scanner;

class FrequencyCounter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        int rows = scanner.nextInt();

        System.out.println("Enter the number of columns: ");
        int columns = scanner.nextInt();

        int[][] matrix = new int[rows][columns];

        // Accepting matrix elements from the user
        System.out.println("Enter the matrix elements: ");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        System.out.println("Enter the number to find its frequency: ");
        int number = scanner.nextInt();

        // Count the frequency of the given number
        int frequency = findFrequency(matrix, rows, columns, number);

        System.out.println("Frequency of " + number + " is: " + frequency);

        scanner.close();
    }

    static int findFrequency(int Arr[][], int iRow, int iCol, int target) {
        int frequency = 0;

        for (int i = 0; i < iRow; i++) {
            for (int j = 0; j < iCol; j++) {
                if (Arr[i][j] == target) {
                    frequency++;
                }
            }
        }

        return frequency;
    }
}

