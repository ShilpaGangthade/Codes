/*Q2) Write a program which accept two number from user and  display position of common ON bits from that two number.

Input: 10  15(1010  1111)
Output:2    4
*/
import java.util.*;
class A40Q2
{
public static void CommonBits(int iNo1,int iNo2)
    {
     int iResult=0;
     int iMask =1;
     int iPos=0;

     for(int i=0;i<32;i++)
      {
        if(((iNo1 & iMask)!=0) && ((iNo2 & iMask)!=0))
        {
          System.out.print((i + 1) + " ");
        }
        iMask=iMask<<1;
      }
    }
public static void main(String Arg[])
{
    int iValue1 = 0;int iValue2=0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter first number:");
    iValue1 = sobj.nextInt();

    System.out.println("Enter second  number:");
    iValue2 = sobj.nextInt();

   
     CommonBits(iValue1, iValue2);


   
   
}
}