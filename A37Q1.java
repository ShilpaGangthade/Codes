/*Q1)Write a program which check whether 15th bit is on or off.

*/
import java.util.*;
class A37Q1
{

public static boolean ChkBit(int iNo)
{
int iResult  = 0;
int iMask = 0X00004000;

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
    System.out.println("15th bit is on");
 }
else 
{
    System.out.println("15th bit is off");
}

}
}