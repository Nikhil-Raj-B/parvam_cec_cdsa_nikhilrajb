#include<stdio.h>
#include<string.h>
int main(){
   char f_name[20],l_name[20],name[50];
 printf("enter your first name:");
 scanf("%s",f_name);
 printf("enter your last name:");
 scanf("%s",l_name); 
 strcpy(name,f_name);
 strcat(name,l_name);
 printf("full name: %s\n",name); //using string handling function
 printf("full name: %s %s\n",f_name, l_name);
 printf("full name in upperase:%s\n",strupr(name)); 
 printf("name in lower chase:%s\n",strlwr(name));
 printf("name in reeveresed order:%s\n",strrev(name));
}