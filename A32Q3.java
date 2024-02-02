/*
Q3) Write a Java program which accept string from user and return difference between frequency
 of small characters and frequency of capital character. 

Input: "MarvellouS"
Output: 6(8-2) 
*/
import java.util.*;

 class A32Q3
 {
    public static int CountDiff(String str)
    {
        char Arr[]=str.toCharArray();
        int iCnt =0, iCap = 0,iSma=0;

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='A') && (Arr[iCnt]<='Z'))
            {
               iCap++;
            }
            else
            {
               iSma++;
            }
        }
        return(iSma - iCap);
    }
   public static void main(String arg[])
   {
      int iRet = 0;
      String st = null;

      Scanner sobj = new Scanner(System.in);
      
      System.out.println("Your String : \n");
      st = sobj.nextLine();

      iRet = CountDiff(st);

      System.out.println("Difference is : "+iRet);

      
   }
 }