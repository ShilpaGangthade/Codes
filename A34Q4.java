/*
Q4) Write a Java program which accept numbers from user and return multiplication of all digits.

Input: 2395
Output: 270

Input: 1018
Output: 8

Input: 9440
Output: 144

Input: 922432
Output: 864

Program Layout:
*/
import java.util.*;

 class A34Q4
 {
    public static int Multiply(int iNo)
    {
         int iDigit = 0 , iMult = 1;
         if(iNo<0)
         {
            iNo=-iNo;
         }
         while(iNo != 0)
         {
            iDigit = iNo % 10;
            iNo=iNo/10;
            if(iDigit != 0)
            {
                  iMult=iMult*iDigit;
            }
            
         }
         return iMult;
    }
    public static void main(String arg[])
    {
      int No = 0, iRet = 0;
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter number : ");
      No = sobj.nextInt();

      iRet = Multiply(No);

      System.out.println("Multiplication is : "+iRet);
    }
 }