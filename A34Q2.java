/*
Q2) Write a Java program which accept numbers from user and return the count of odd digits.

Input: 2395
Output: 3

Input: 1018
Output: 2

Input: -1018
Output: 2

Input: 8462
Output: 0

Program Layout:
*/
import java.util.*;

 class A34Q2
 {
    public static int CountOdd(int iNo)
    {
          int iDigit = 0, Count = 0;
          if(iNo<0)
          {
            iNo=-iNo;
          }
          while(iNo != 0)
          {
            iDigit=iNo % 10;
            if(iDigit % 2 != 0)
            {
                  Count++;
            }
            iNo=iNo/10;
          }
          return Count;
    }
    public static void main(String args[])
    {
      int No = 0 , iRet = 0;
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter Number : ");
      No= sobj.nextInt();
      iRet=CountOdd(No);
      System.out.println("Count of odd numbers is : "+iRet);
    }
 }