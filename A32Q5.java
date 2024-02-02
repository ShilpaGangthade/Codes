/*
Q5) Write a Java program which accept string from user and display it in reverse order.


Input: "MarvellouS"
Output: "SuollevraM"


*/
import java.util.*;

 class A32Q5
 {
    public static void Reverse(String str)
    {
      int iCnt = 0;
        char Arr[]=str.toCharArray();

        for(iCnt=(Arr.length-1);iCnt>=0;iCnt--)
        {
         System.out.print(Arr[iCnt]);
        }
    }
    public static void main(String arg[]) 
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("String is : \n");
      String st = sobj.nextLine();

      Reverse(st);
    }
 }