// #include <stdio.h>
// #include <string.h>
// int main(){
//     char st[50];
//     char lol[]={"abcdef"};
//     gets(st);
//     // printf("%d\n",strlen(st));
//     // strcpy(lol,st);
//     strcat(lol,st);
//     printf("%s\n",lol);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     char st[5];
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%c",&st[i]);
//     }
//     printf("%s\n",st);
//     char lol[5];
//     scanf("%s",lol);
//     printf("%s\n",lol);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     int n=0;
//     int i=0;
//     char st[500];
//     gets(st);
//     while (st[i]!=0)
//     { i++;
//         n++;
//     }

//     printf("%d\n",n);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     char st[]={"asmakn"};
//     int i=0,z=0,k=0;
//     // char m='m',n='n';
//     while (st[i]!='m')
//     { i++;
//         z++;
//     }
//     while (st[i]!= 'n')
//     { i++;
//       k=i;
//     }
//    for(int u=z;u>=z&&u<=k;u++){
//     printf("%c",st[u]);
//    }

//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// void chan(char s[], int n, char t[]);
// void chan(char s[], int n, char t[])
// {
//     for (int i = 0; i < n; i++)
//     {
//         t[i] = s[i];
//     }
// }
// int main()
// {
//     char source[10] = {"asdfghjkl"};
//     char target[10];
//     chan(source, 10, target);
//     // puts(target);
//     printf("%s \n %s",source, target);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// void en(char p[], int n);
// void en(char p[], int n)
// {
//     int y = 0;
//     for (int i = 0; i < n; i++)
//     {
//         y = (int)p[i];
//         printf("%d\n", y + 1);
//     }
// }
// int main()
// {
//     char pass[] = {"lolidiot"};
//     en(pass, 9);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char source[6] = {"jejpu"};
//     for (int i = 0; i < 6; i++)
//     {
//         source[i] = source[i] - 1;
//     }
//     printf("%s\n", source);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <strings.h>
// int main()
// {
//     printf("enter character \n");
//     char c = 'k';
//     int n = 0, k = 0;
//     // scanf("%c",&c);
//     char st[53] = {"abcdefghijklmnoabcdefghijklmnopqrstuvwxyzpqrstuvwxyz"};
//     for (int i = 0; i < strlen(st); i++)
//     {
//         if (st[i] == c)
//         {
//             n++;
//         }
//     }
//     printf("%d", n);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     printf("checking occurence of a char\n enter a char\n");
//     char s ,k;
//     scanf("%s",&s);
//     char str[]={"idoit lol dumb fellow"};
//     for (int i = 0; i < 22; i++)
//     {
//         k=str[i];
//         if (k==s)
//         {
//             printf("yes \n");
//             break;
//         }

//     }

//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <strings.h>
// struct theta
// {
//     char name[10];
//     float salary;
//     int age;
// };

// int main()
// {
//     printf("enter data\n");
//     char name[10];

//     struct theta e1;
//     char nme[10];
//     printf("enter name\n");
//     scanf("%s", nme);
//     strcpy(e1.name, nme);
//     int a;
//      printf("enter age\n");
//     scanf("%d", &a);
//     e1.age = a;
//     float sal;
//     printf("enter salary\n");
//     scanf("%f", &sal);
//     e1.salary = sal;

//     printf("%s\n",e1.name);
//     printf("%d\n",e1.age);
//     printf("%f\n",e1.salary);
//     return 0;
// }

//
// ----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>
// typedef struct data
// {
//     char name[300];
//     float gpa;
//     int age;
// } cr;
// int main()
// {   cr set[4];
//     int i=0,n=0;
//      cr*ptr;
//         set[0].age=577;
//         set[0].gpa=9.8;
//         strcpy(set[0].name,"lol");
//           set[1].age=571;
//         set[1].gpa=9.1;
//         strcpy(set[1].name,"idiot");
//         while (n<2)
//         {
//             n++;
//             ptr = &set[i];
//              printf("%s\n",ptr->name);
//              i++;
//         }

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// typedef struct complex_no
// {
//     int r;
//     int i;
// } cn;
// int main()
// {
//     printf("complex numbers\n");
//     int real, imaginary;
//     int *re = &real;
//     int *im = &imaginary;
//     printf("real part\n");
//     scanf("%d", &real);
//     printf("imaginary part\n");
//     scanf("%d", &imaginary);
//     cn set[4];
//     int z = 0;
//     while (z < 5)
//     {
//         set[z].r = *re;
//         set[z].i = *im;
//         cn *ptr;
//         ptr = &set[z];
//         printf("%d+i%d\n", (ptr->r)+z, (ptr->i)+z);
//         z++;
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// typedef struct bank{
//     char str[300];
//     // float paisa;
//     float bal;
//     int ac;
// }bank;
// int main(){
//     bank base[3];
//     bank*ptr;
//     base[0].bal
//     printf("kanada bank for idiots\n");
//     printf("ps: it cant be in kanada\nenter your name(in english and your are gonna eat with a spoon bcz u look a filthy pig)");
//     char name[10];
//     int ac;
//     scanf("%s\n",&name);
//     printf("enter your ac");scanf("%d",&ac);
//      int bal=12345, cash , opt;
//     printf("choice 1 = check balance \n");
//     printf("choice 2 = desposit money\n");
//     printf("choice 3 = withdraw\n");
//     printf("Enter your choice=");
//     scanf("%d",&opt);
//     if(opt==1){
//         printf("amount in bank %d", bal);
//     }

//     else if(opt==2){
//         printf(" enter amount to deposit=");
//         scanf("%d",&cash);
//         printf("update balance=%d",bal= bal + cash);
//     }
//      else if(opt==3){
//         printf("enter amount to withdraw=");
//         scanf("%d",&cash);
//         if(cash>=bal){ printf("insufficient funds ");}
//         else{ printf("available balance after transcation=%d", bal= bal-cash);}
//     }
//     else {printf("please enter a valid");}
//     return 0;
// }

// -------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>
// typedef struct bank
// {
//     int ac;
//     float id;
//     float bal;
//     char name[9];
//     // bal = ac * id;
// } bnz;
// int main()
// {
//     bnz *ptr;
//     bnz *ptname;
//     printf("bank bnzk\n");
//     bnz nset[1];
//     nset[0].bal = 1000;
//     bnz set[3];
//     set[0].ac = 446445425;
//     set[1].ac = 454552;
//     set[2].ac = 741859;
//     set[0].bal = 5425;
//     set[1].bal = 552;
//     set[2].bal = 0;
//     strcpy(set[0].name, "lol");
//     strcpy(set[1].name, "lolsdjl");
//     strcpy(set[2].name, "lolqqo");

//     printf("1.check balance\n");
//     printf("2. deposit \n");
//     printf("3. withdarw\n");
//     printf("4. Create a new account\n");
//     int choice;
//     scanf("%d", &choice);
//     if (choice == 4)
//     {
//         printf("enter your required id\n");
//         int new_id;
//         scanf("%d", &new_id);
//         bnz *nptr;
//         nptr = &nset[0];
//         nset[0].ac = new_id;
//         printf("your confirmed id is %d\n", nset[0].ac);
//         printf("enter display name \n");
//         char new_name[30];
//         scanf("%s", new_name);
//         strcpy(nset[0].name, new_name);
//         printf("your final display name is %s\n your balance is %f", nset[0].name, nset[0].bal);
//     }
//     else
//     {
//          printf("enter ac\n");
//         int check_ac;
//         scanf("%d", &check_ac);
//     for (int i = 0; i < 3; i++)
//     {
//             ptr = &set[i];
//             if (check_ac == ptr->ac)
//             {
//                 printf(" your name %s\n", ptr->name);
//                 if (choice == 1)
//                 {
//                     printf("your balance is %f\n", ptr->bal);
//                 }
//                 else if (choice == 2)
//                 {
//                     printf("enter amount\n");
//                     int paisa;
//                     scanf("%d", &paisa);
//                     printf("%f is your final balance\n", ptr->bal + paisa);
//                 }
//                 else if (choice == 3)
//                 {
//                     printf("enter amount\n");
//                     int money;
//                     scanf("%d", &money);
//                     if (money > ptr->bal)
//                     {
//                         printf("f@ck off earn more nigga\n");
//                     }
//                     else
//                     {
//                         printf("remaining balance is %f\n", ptr->bal - money);
//                     }
//                 }
//                 else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
//                 {
//                     printf("seriously select correctly\n");
//                 }
//             }
//     }
//     }
//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>
// typedef struct date{
//     int dd;
//     int mm;
//     int yyyy;
// }date;
// int main(){

//     date*cptr;
//     date*tptr;
//     date set[2];
//     cptr=&set[0];
//     tptr=&set[1];
//     printf("enter todays date in dd mm yyyy\n");
//     scanf("%d",&tptr->dd);
//     scanf("%d",&tptr->mm);
//     scanf("%d",&tptr->yyyy);
//     printf("enter date to compare\n");
//     scanf("%d",&cptr->dd);
//     scanf("%d",&cptr->mm);
//     scanf("%d",&cptr->yyyy);
//     if ((*cptr).yyyy<(*tptr).yyyy)
//     {
//         printf("the date entered is of past\n");
//     }
//     else if ((*cptr).mm<(*tptr).mm)
//     {
//         printf("the date entered is of past\n");
//     }
//     else if ((*cptr).dd<(*tptr).dd)
//     {
//         printf("the date entered is of past\n");
//     }
//     else{
//         printf("the date entered is in future\n");
//     }

//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     FILE*ptr;
//     ptr=fopen("file.txt","r");
//     if (ptr==NULL)
//     {
//         printf("the file doesnt exist\n");
//     }
//     else{
//         printf("the file does exist\n");
//     }

//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------------------------------------------------/
// #include <stdio.h>
// int main(){
//     FILE*ptr;
//     ptr = fopen("idiot.txt","a");
//     int x =54554;
//     fprintf(ptr,"%d",x);
//     return 0;
// }
// -------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     FILE*ptr;
//     ptr=fopen("idiot.txt","r");
//     while (1)
//     {
//         char c;
//         c=fgetc(ptr);
//         if (c==EOF)
//         {
//             break;
//         }
//         printf("%c",c);
//     }

//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     FILE*ptr;
//     ptr=fopen("idt.txt","r");
//      char c;
//      for (int i = 0; i < 3; i++)
//      {
//         // fscanf(ptr,"%c",&c);
//         c = fgetc(ptr);
//         printf("%c\n",c);
//      }

//     return 0;
// }
// -----------------------------------------------------------------------------------
// #include <stdio.h>
// int main()
// {
//     printf("multiplication table \nenter number to download table");
//     int n, k,b;
//     scanf("%d", &n);
//     FILE *ptr;
//     ptr = fopen("idt.txt", "w");
//      int i=0;
//      while(i<10){
//         k=i+1;
//         b=k*n;
//         fprintf(ptr,"%d times %d is %d\n",k,n,b);
//         i++;
//      }
//     return 0;
// }
// ---------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     char a;
//     FILE*ptr;
//     ptr=fopen("idt.txt","r");
//     FILE*pto;
//     pto=fopen("idiot.txt","w");
//     while(1){
//         a=fgetc(ptr);
//         char*z=&a;
//         if (a==EOF)
//         {
//             break;
//         }
//         else {
//        fputc(*z,pto);
//        fputc(*z,pto);
//         }
//     }
//     return 0;
// }
// --------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>
// typedef struct data
// {
//     char name[30];
//     int salary;
// } data;
// int main()
// {
//     FILE*fptr;
//     fptr=fopen("empdata.txt","w");
//     data set[2];
//     data*ptr;
//     for (int i = 0; i < 2; i++)
//     {
//         ptr=&set[i];
//         printf("enter name\n");
//         scanf("%s",&ptr->name);
//         fprintf(fptr,"name=%s",ptr->name);
//         printf("enter your pay\n");
//         scanf("%s",&ptr->salary);
//         fprintf(fptr,"salary=%d\n",ptr->salary);
//     }

//     return 0;
// }
// ------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main(){
//     FILE*readme;
//     readme=fopen("hm.txt","r");
//     int a;
//     fscanf(readme,"%d",&a);
//     FILE*db;
//     db=fopen("hm.txt","a");
//     fprintf(db,"%d",2*a);
//     return 0;
// }
// ------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// #include <string.h>
// typedef struct game{
//     int c;
//     char options[100];
// }opt;
// int main()
// {
//     int x;
//     srand(time(0));
//     x = rand() % 3 + 1;
//     int choice;
//     int l=0;
//     opt set[3];
//     opt*ptr;
//     strcpy("set[0].options","rock");
//     strcpy("set[1].options","paper");
//     strcpy("set[2].options","scissor");
//     printf("\t\t\t\tBasic game(rather shity game)\n enter your number\n1.rock\n2.paper\n3.scissor\n");
//     scanf("%d", &choice);
//     for (int i = 0; i < 2; i++)
//     {
//         ptr=&set[i];
//         if (choice==i+1)
//         {
//             printf("your choice is %s\n",ptr->options);
//         }

//     }
//     FILE *pt;
//     pt = fopen("ghis.txt", "a");
//     fprintf(pt, "%d\n", choice);
//     do
//     {
//          int b=0;
//          b++;
//         if (choice - 1 == x&&choice!=1)
//         {
//             printf("you won\n");
//             printf("%d times took u\n",b);
//             l = 1;
//             continue;
//             break;
//         }
//         else if(choice==1&&x==3){
//             printf("u won\n");
//             break;
//         }
//         else
//         {
//             printf("\nnope\n");
//             printf("loser u lost %d times\n",b);
//             continue;
//         }
//     }while (l == 1);
//     printf("%d\n", x);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>
// int main(){
//     srand(time(0));
//     printf("creating dynamic memory ptr\n");
//     int*ptr;
//     int n;
//     printf("enter number \n");
//     scanf("%d",&n);
//     ptr=(int*)calloc(n,sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n",rand());
//     }

//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     printf("dma\n");
//     printf("enter frequency of entries\n");
//     int n;
//     scanf("%d", &n);
//     int *ptr;
//     ptr = (int *)malloc(n*sizeof(int));
//     // ptr = (int *)calloc(n,sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter %dth entry \n",i);
//         scanf("%d",&ptr[i]);
//     }
//     printf("your array is \n\n\n");
//     for (int k = 0; k < n; k++)
//     {
//         printf("%d\n",ptr[k]);
//     }

//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     srand(time(0));
//     printf("dma\n");
//     int *ptr;
//     int n;
//     printf("enter number of enteries = ");
//     scanf("%d", &n);
//     ptr = (int *)calloc(n, sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t",rand());
//     }
//     ptr=(int*)realloc(ptr,10*sizeof(int));
//     printf("new array is \n");
//     for (int k = 0; k<10; k++)
//     {
//         printf("%d\t",rand());
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     printf("table of integer\n");
//     int n;
//     printf("enter number to get table\n");
//     scanf("%d", &n);
//     int*ptr;
//     ptr=(int*)calloc(10,sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         ptr[i]=n*(i+1);
//         printf("%d X %d = %d \n",n,i+1,ptr[i]);
//     }
//     ptr=(int*)realloc(ptr,15);
//     for (int i = 0; i < 15; i++)
//     {
//         printf("neqw array upto 15\n");
//         ptr[i]=n*(i+1);
//         printf("%d X %d = %d \n",n,i+1,ptr[i]);
//     }

//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main()
// {
//     int ar[5]={486,4,684,645,879};
//     printf("enter position of element to remove\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\t",ar[i]);
//     }

//     int n;
//     scanf("%d", &n);
//     for(int i =n-1;i<5;i++){
//         ar[i]=ar[i+1];
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d\t",ar[i]);
//     }

//     return 0;
// }
// --------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main()
// {
//     printf("sorting an array increasing order\n");
//     int set[4] = {51, 7, 112, 89};
//     int min, temp;
//     int nset[4];
//     int *ptr;
//     for (int i = 0; i < 4; i++)
//     {
//         min = set[i];
//         for (int k = i + 1; k < 4; k++)
//         {
//             if (min > set[k])
//             {
//                 set[k] = set[k] + min;
//                 min = set[k] - min;
//                 set[k] = set[k] - min;
//             }
//         }
//         nset[i] = min;
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("%d\t", nset[i]);
//     }

//     return 0;
// }
// -------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     // int set[5]={23,78,32,47,36};
//     int *ptr;
//     ptr = (int *)calloc(5, sizeof(int));
//     ptr[0] = 18;
//     ptr[1] = 56;
//     ptr[2] = 46;
//     ptr[3] = 86;
//     ptr[4] = 74;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\t", ptr[i]);
//     }
//     printf("inserting element at position\n");
//     printf("enter position \t");
//     int p;
//     scanf("%d", &p);
//     printf("\nenter value to be added to that postion\t");
//     int v;
//     scanf("%d", &v);
//     int n = 5;
//     ptr = (int *)realloc(ptr, 6 * sizeof(int));
//     do
//     {
//         ptr[n] = ptr[n - 1];
//         n = n - 1;
//     } while (n != p - 1);
//     ptr[p - 1] = v;
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d\t", ptr[i]);
//     }
//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int main()
// {
//     int min, temp;
//     int set[5] = {1, 45, 5, 7, 88};
//     for (int i = 0; i < 5; i++)
//     {
//         min = set[i];
//         for (int k = i + 1; k < 5; k++)
//         {
//             if (min > set[k])
//             {
//                 temp = min;
//                 min = set[k];
//                 set[k] = temp;
//             }
//         }
//         set[i] = min;
//     }

//     for (int l = 0; l < 5; l++)
//     {
//         printf("%d\t", set[l]);
//     }

//     return 0;
// }
// ----------------------------------------------------------
// #include <stdio.h>
// int fac(int);
// int fac(int a){
//     if(a==0|| a==1){
//         return 1;
//     }
//     return a*fac(a-1);
// }
// int main(){
//     int x=4;
//     int y;
//     y=fac(4);
//     printf("%d\n",y);
//     return 0;
// }
// -------------------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     printf("\t\t\tarray funtions\n");
//     printf("1.insert\n2.Delete\n");
//     int choice;
//     int *arr;
//     arr = (int *)calloc(5, sizeof(int));
//     arr[0] = 14;
//     arr[1] = 114;
//     arr[2] = 54;
//     arr[3] = 24;
//     arr[4] = 141;
//     scanf("%d", &choice);
//     if (choice == 1)
//     {
//         printf("enter position = \n");
//         int pos;
//         scanf("%d", &pos);
//         printf("enter value =  \n");
//         int value;
//         scanf("%d", &value);
//         arr = (int *)realloc(arr, 6 * sizeof(int));
//         for (int i = 6; i > pos - 1; i--)
//         {
//             arr[i] = arr[i - 1];
//         }
//         arr[pos - 1] = value;
//         for (int i = 0; i < 6; i++)
//         {
//             int *ptr;
//             ptr = &arr[i];
//             printf("%d\t", *ptr);
//         }
//     }
//     if (choice == 2)
//     {
//         printf("enter position\n");
//         int dpos;
//         scanf("%d", &dpos);
//         for (int i = dpos - 1; i < 5; i++)
//         {
//             int temp;
//             temp = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = temp;
//         }
//         arr = (int *)realloc(arr, 4 * sizeof(int));
//         for (int i = 0; i < 4; i++)
//         {
//             printf("%d\t", arr[i]);
//         }
//     }

//     return 0;
// }
// -----------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int search(int arr[], int low, int high, int n, int s);
// int search(int arr[], int low, int high, int n, int s)
// { int k;
//     int mid = (high - low) / 2 + low;
//     if (low>high)
//    {
//        k=-1;
//        return k;
//    }
//     if(s==arr[mid]){
//         k=1;
//         return k;
//     }
//     if (s == arr[low] || s == arr[high])
//     {
//         k=1;
//         return k;
//     }
//     else if (s > arr[mid])
//     {
//         low = mid + 1;
//         search( arr,  low,  high,  n,  s);
//     }
//     else if (s < arr[mid])
//     {
//         high = mid - 1;
//         search( arr,  low, high,  n,  s);
//     }
// }
// int main()
// {
//     int set[6] = {6,5,4,3,2,1};
//     int min, temp;
//     for (int i = 0; i < 6; i++)
//     {
//         min = set[i];
//         for (int j = i + 1; j < 6; j++)
//         {
//             if (min > set[j])
//             {
//                 temp = min;
//                 min = set[j];
//                 set[j] = temp;
//             }
//             set[i] = min;
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d\t", set[i]);
//     }

//     printf("\nenter int to search\n");
//     int s;
//     scanf("%d", &s);
//     int r ;
//     r= search(set,0,5, 6, s);
//     if(r==-1){
//         printf("nope\n");
//     }
//     if(r==1){
//         printf("gotcha\n");
//     }
//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// void ins(int arr[], int, int, int);
// void ins(int arr[], int n, int p, int num)
// {
//     p = p - 1;
//     for (int i = n; i >p; i--)
//     {
//         arr[i] = arr[i-1];
//     }
//     n = n + 1;
//     arr[p] = num;
//     for (int j = 0; j < n; j++)
//     {
//         printf("%d\t", arr[j]);
//     }
// }
// int main()
// {
//     printf("insertion via function\n");
//     int set[100];
//     printf("enter number of integers\n");
//     int choice;
//     scanf("%d", &choice);
//     for (int i = 0; i < choice; i++)
//     {
//         printf("enter %d choice\n", i);
//         scanf("%d", &set[i]);
//     }
//     for (int i = 0; i < choice; i++)
//     {
//         printf("%d\t", set[i]);
//     }
//     int value, pos;
//     printf("enter the position\t");
//     scanf("%d", &pos);
//     printf("enter value\t");
//     scanf("%d", &value);
//     ins(set, choice, pos, value);
//     return 0;
// }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// void del(int*,int,int);
// void del(int arr[],int n,int p){
//     for (int i = p-1; i < n; i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         printf("%d\t",arr[i]);
//     }

// }
// int main(){
//     printf("deletion of element by pos via user defined fn\n");
//     int set[5]={71,28,93,74,45};
//     del(set,5,3);
//     return 0;
// }
// ------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// int search(int *, int, int);
// int search(int *arr, int n, int t)
// {
//     int high =n-1, low=0, mid;
//     while (low <= high)
//     {
//         mid = low + (high - low) / 2;
//         if (t != arr[0] || t != arr[n - 1])
//         {
//             mid = low + (high - low) / 2;
//             if (arr[mid] == t)
//             {
//                 return 1;
//                 break;
//             }
//             else
//             {
//                 if (arr[mid] > t)
//                 {

//                     high = mid - 1;
//                 }
//                 else if (arr[mid] < t)
//                 {
//                     low = mid + 1;
//                     high = n - 1;
//                 }
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     printf("\n\nbinary sorting via user defined fn\n");
//     int set[] = {1,2,4,7,9,77,78,79,80,88,188,200,201};
//     int no_elements;
//     no_elements = sizeof(set) / sizeof(int);
//     printf("enter number to search\t");
//     int x;
//     scanf("%d", &x);
//     int k = search(set, no_elements, x);
// if(k==1){
//     printf("\tgotcha !!-_-!!");
// }
// else{
//     printf("\tnope -_-^!");
// }
//     return 0;
// }
// ---------------------------------------------------------------------------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct node
// {
//     int data;
//     struct node *next;
// } node;
// int main()
// {
//     // a or head

//     printf("linked list functions\n");
//     node *a;
//     node *b;
//     node *c;
//     node *d;
//     node *start;
//     start = malloc(sizeof(node));
//     a = malloc(sizeof(node));
//     b = malloc(sizeof(node));
//     c = malloc(sizeof(node));
//     d = malloc(sizeof(node));
//     start->next=a;
//     a->data = 1;
//     a->next = b;
//     b->data = 7;
//     b->next = c;
//     c->data = 72;
//     c->next = d;
//     d->data = 7778;
//     d->next = NULL;
//     printf("1.printing linked list\n2.adding an element \n3.deletion of element\n\n");
//     node *lol;
//     lol = malloc(sizeof(node));
//     node *u;
//     u = malloc(sizeof(node));
//     node *top;
//     top = malloc(sizeof(node));
//     int choice;
//     scanf("%d", &choice);
//     node *temp;
//     temp = malloc(sizeof(node));
//     node *ptr;
//     ptr = malloc(sizeof(node));
//     if (choice == 1)
//     {
//         ptr = a;
//         while (ptr != NULL)
//         {
//             temp = ptr;
//             printf("%d\t", ptr->data);
//             free(ptr);
//             ptr = temp->next;
//         }
//     }
//     else if (choice == 2)
//     {
//         printf("enter value of element\n");
//         int v;
//         scanf("%d", &v);
//         printf("enter position to add %d\n", v);
//         int pos;
//         scanf("%d", &pos);
//         node *k;
//         k = malloc(sizeof(node));
//         node *p;
//         p = malloc(sizeof(node));
//         p->data = v;
//         ptr = a;
//         for (int i = 1; i < 6; i++)
//         {
//             if (pos - 1 == i)
//             {
//                 k = ptr->next;
//                 ptr->next = p;
//                 p->next = k;
//             }
//             ptr = ptr->next;
//         }
//         ptr = a;
//         while (ptr != NULL)
//         {
//             k = ptr->next;
//             printf("%d\t", ptr->data);
//             ptr = k;
//         }
//     }
//     else if (choice == 3)
//     {
//         printf("1.Delete via position \n2.Delete via selecting node\n");
//         int kh;
//         scanf("%d", &kh);
//         if (kh == 1)
//         {
//             printf("enter position\n");
//             int pq;
//             scanf("%d", &pq);
//             lol = a;
//             for (int i = 1; i < 5; i++)
//             {
//                 if (pq == 1)
//                 {
//                     start->next=b;
//                     free(a);
//                 }
//                 if (pq - 1 == i)
//                 {
//                     top = lol->next;
//                     lol->next = top->next;
//                 }
//                 lol = lol->next;
//                 if (lol == NULL)
//                 {
//                     break;
//                 }
//             }

//             u = start->next;
//             while (u != NULL)
//             {
//                 printf("%d\t", u->data);
//                 u = u->next;
//             }
//             free(u);
//             free(lol);
//             free(top);

//             // ikn ikn its shitty way it needs to be spontaneous will work on it after completing!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//         }
//         if (kh == 2)
//         {
//             printf("enter value of node\n");
//             int vae;
//             scanf("%d", &vae);
//             lol = a;
//             int pte;
//             for (int i = 1; i < 5; i++)
//             {
//                 if (lol->data == vae)
//                 {
//                     pte = i;
//                     printf("position is %d\n", i);
//                     break;
//                 }
//                 lol = lol->next;
//                 if (lol == NULL)
//                 {
//                     break;
//                 }
//             }
//             free(lol);
//             lol = a;
//             for (int i = 1; i < 5; i++)
//             {
//                 if (pte - 1 == i)
//                 {
//                     node *top;
//                     top = malloc(sizeof(node));
//                     top = lol->next;
//                     free(lol->next);
//                     lol->next = top->next;
//                 }
//                 lol = lol->next;
//                 if (lol == NULL)
//                 {
//                     break;
//                 }
//             }
//             free(lol);
//             u = start->next;
//             while (u != NULL)
//             {
//                 printf("%d\t", u->data);
//                 u = u->next;
//             }
//         }
//     }
//     return 0;
// }
// ------------------------------------------------GREEDY GREEDY-------GREEDY--------GREEDY-------------------------------------------------------------------------------------

// #include <stdio.h>
// int qu(int *, int, int);
// int qu(int *set, int t, int n)
// {
//     int max;
//     int freq;
//     max = set[n - 1];
//     freq = t / max;
//     if (t % max == 0)
//     {
//         freq = t / max;
//         return freq;
//     }
//     else
//     {
//         t = t - (freq * max);
//         int r = qu(set, t, n - 1);
//         if (r != -1)
//         {
//             return freq + r;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int den[] = {1, 2, 5, 10};
//     int target;
//     scanf("%d", &target);
//     int p = qu(den, target, 4);
//     printf("%d\n", p);
//     return 0;
// }
