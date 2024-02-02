/*Q1) Write a program which accept one number from user and count number of ON(1) bits in it without using % and / operator.

Input: 11
Output:3
*/
import java.util.*;
class A40Q1
{
public static int CountOne(int iNo)
    {
     int iResult=0;
     int iMask =1;
     int iCnt=0;

     for(int i=0;i<32;i++)
      {
        if((iNo & iMask)!=0)
        {
            iCnt++;
        }
        iMask=iMask<<1;
      }return iCnt;
    }
public static void main(String Arg[])
{
    int iValue = 0;
   int iRet=0;
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter a  number:");
    iValue = sobj.nextInt();

   
    iRet = CountOne(iValue);


    System.out.println("number of On bits is:"+iRet);
   
}
}