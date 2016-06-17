//Convert lower case letters to upper case and vice-versa. Using C

#include<stdio.h>

void main(){

char n;
printf("Enter : \n");
scanf("%c",&n);
if(n>='a'&&n<='z')
{n=n-32;
printf("%c after conversion %c\n",n+32,n);}
else{
n=n+32;
printf("%c after conversion %c\n",n-32,n);

}
}



