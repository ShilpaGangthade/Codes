/*
Q1) Write a Java program which accept numbers from user and return the count of even digits.

Input: 2395
Output: 1

Input: 1018
Output: 2

Input: -1018
Output: 2

Input: 8462
Output: 4

Program Layout:
*/
import java.util.*;

 class A34Q1
 {
    public static int CountEven(int No)
    {
         int iCnt=0 , iDigit = 0,Count = 0;
         if(No<0)
         {
            No=-No;
         }
         while(No != 0)
         {
            iDigit = No % 10;
            if(iDigit % 2 == 0)
            {
                  Count++;
            }
            No = No/10;
         }
         return Count;
    }
    public static void main(String arg[])
    {
      int iNo = 0, iRet = 0;
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the number : ");
      iNo = sobj.nextInt();
      iRet = CountEven(iNo);
      System.out.println("Even numbers are : "+iRet);
    }
 }