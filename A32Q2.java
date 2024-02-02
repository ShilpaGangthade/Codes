/*
Q2) Write a Java program which accept string from user and count number of small characters. 

Input: "Marvellous"
Output: 9 
*/
import java.util.*;

 class A32Q2
 {
    public static int CountSmall(String str)
    {
        char Arr[]= str.toCharArray();
        int iCnt = 0;
        int iCount = 0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='a') && (Arr[iCnt]<='z'))
            {
               iCount++;
            }
        }
        return iCount++;
    }
    public static void main(String arg[])
    {
      int iRet = 0;
      
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : \n");
      String st = sobj.nextLine();

      iRet = CountSmall(st);

      System.out.println("No. small letters are : "+iRet);
    }
 }