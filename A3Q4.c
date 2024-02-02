//Q4.Accept one character from user and convert case of that character.
//Input : a   Output : A
//Input : D   Output : d
 
 #include<stdio.h>
 #include<conio.h>

  char DisplayConvert(char cVal)
   {
       
       if(cVal >= 'A' && cVal <= 'Z')
       {
        cVal=cVal + 32;
        printf("%c",cVal);
       }
       else if(cVal >= 'a' && cVal <= 'z')
       {
        cVal=cVal-32;
        printf("%c",cVal);
       }
   }
   int main()
   {
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
   }