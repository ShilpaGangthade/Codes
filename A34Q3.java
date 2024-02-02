/*
Q3) Write a Java program which accept numbers from user and return the count of digits between 3 and 7.

Input: 2395
Output: 1

Input: 1018
Output: 0

Input: 4521
Output: 2

Input: 9922
Output: 0

Program Layout:
*/
import java.util.*;

 class A34Q3
 {
    public static int CountRange(int iNo)
    {
          int iDigit = 0, Count = 0;
          if(iNo<0)
          {
            iNo=-iNo;
          }
          while(iNo != 0)
          {
            iDigit = iNo % 10;
            if((iDigit>3) && (iDigit<7))
            {
                  Count++;
            }
            iNo = iNo /10;
          }
          return Count;
    }
    public static void main(String arg[])
    {
      int No =0, iRet = 0;
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter number : ");
      No=sobj.nextInt();
      iRet = CountRange(No);
      System.out.println("Range is : "+iRet);
    }
 }