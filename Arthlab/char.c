 #include <stdio.h>
 int main() {
   char ch;
   printf("Enter a character: ");
   scanf("%c", &ch);
   if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
      printf("This is an alphabet");
   else if(ch >= '0' && ch <= '9')
      printf("This is a number");
   else
      printf("This is a special character");

      return 0;
}
