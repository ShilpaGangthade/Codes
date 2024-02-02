/*Q4) Write a program which check whether 7th, 8th, 9th bits are On or Off.

*/
import java.util.*;
class A37Q4
{

public static boolean ChkBit(int iNo)
{
int iResult  = 0;
int iMask = 0X000001c0;

iResult = iNo & iMask;
if(iResult == iMask)
{
    return true;
}
else 
{
    return false;
}

}
public static void main(String Arg[])
{
    int iValue = 0;
    boolean bRet = false;

 Scanner sobj = new Scanner(System.in);
 
 System.out.println("Enter the Number");
 iValue = sobj.nextInt();

 bRet = ChkBit(iValue);
 if(bRet==true)
 {
    System.out.println("7th, 8th, 9th bits are on");
 }
else 
{
    System.out.println("7th, 8th, 9th bits are off");
}

}
}