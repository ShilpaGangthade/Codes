/*
Q5) Write a Java program which accept numbers from user and return difference between summation of even digits and summation of
odd digits.

Input: 2395
Output: -15(2  -17)

Input: 1018
Output: 6( 8  -2)

Input: 5733
Output: -18(0  -18)

Program Layout:
*/
import java.util.*;

 class A34Q5
 {
    public static int CountDiff(int iNo)
    {
          int iDiff = 0, iEven=0,iOdd=0, iDigit=0;
          if(iNo<0)
          {
            iNo=-iNo;
          }
          while(iNo != 0)
          {
            iDigit=iNo%10;
            iNo=iNo/10;
            if(iDigit%2==0)
            {
                  iEven=iEven+iDigit;
            }
            else 
            {
                  iOdd=iOdd+iDigit;
            }
          }
          iDiff = iEven - iOdd;
          return iDiff;
    }
    public static void main(String args[])
    {
      int No = 0 , iRet = 0;

      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter number : ");
      No = sobj.nextInt();

      iRet = CountDiff(No);

      System.out.println("Difference is : "+iRet);
    }
 }