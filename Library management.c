#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
struct library 
{ 
char bk_name[30]; 
char author[30]; 
int pages; 
float price; 
}; 
int main() 
{ 
struct library l[100]; 
char ar_nm[30],bk_nm[30]; 
int i,j, keepcount; 
i=j=keepcount = 0; 
printf("\n\t\t<<WELCOME TO LIBRARY MANAGEMENT SYSTEM>>\n"); 
while(j!=6) 
{ 
printf("\n\t~~M E N U~~\n1.ADD A BOOK\n2.DISPLAY BOOK INFORMATION\n"); 
printf("3.DISPLAY ALL BOOKS OF AN AUTHOR\n"); 
printf("4.LIST THE TITLES OF SPECIFED BOOKS\n"); 
printf("5.LIST THE COUNT OF BOOKS(Issued & On Stock)\n"); 
printf("6.EXIT"); 
printf ("\n\n\t ENTER THE ABOVE CHOICE :"); 
scanf("%d",&j); 
switch (j) 
{ 
case 1: 
printf ("ENTER BOOK NAME :"); 
scanf ("%s",l[i].bk_name); 
printf ("ENTER AUTHOR NAME :"); 
scanf ("%s",l[i].author); 
printf ("ENTER PAGES :"); 
scanf ("%d",&l[i].pages); 
printf ("ENTER PRICE :"); 
scanf ("%f",&l[i].price); 
keepcount++; 
break; 
case 2: 
printf("\n\tYOU HAVE ENTERED THE FOLLOWING INFORMATION\n"); 
for(i=0; i<keepcount; i++) 
{ 
printf ("\tBOOK NAME :%s",l[i].bk_name); 
printf ("\tAUTHOR NAME :%s",l[i].author); 
printf ("\tPAGES :%d",l[i].pages); 
printf ("\tPRICE :%f",l[i].price); 
} 
break; 
case 3: 
printf ("ENTER AUTHOR NAME :"); 
scanf ("%s",ar_nm); 
for (i=0; i<keepcount; i++) 
{ 
if (strcmp(ar_nm, l[i].author) == 0) 
printf ("%s %s %d %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price); 
} 
break; 
case 4: 
printf ("ENTER BOOK NAME :"); 
scanf ("%s",bk_nm); 
for (i=0; i<keepcount; i++) 
{ 
if (strcmp(bk_nm, l[i].bk_name) == 0) 
printf ("%s \t %s \t %d \t %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price); 
} 
break; 
case 5: 
printf("\nNo. OF BOOKS IN STOCK :%d", keepcount); 
break; 
case 6: 
exit (0); 
} 
} 
return 0; 
}
