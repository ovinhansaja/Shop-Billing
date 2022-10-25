#include <stdio.h>

int id,pass,code,piece,quen,pay;
float jean,tshir,fro,skir,blou,shir,shoe,tot,bal;

void user()
{
   printf("User ID\t\t:\t");
   scanf("%d",&id);

   usercal();
}
void usercal()
{
   if(id==1234)
   {
       password();
   }
   else
   {
       printf("\n**********************************************************");
       printf("\n\nWrong ID\nTry Again");
       printf("\n\n**********************************************************\n\n");

       user();
   }
}
void password()
{
    printf("Password\t:\t");
    scanf("%d",&pass);

    passwordcal();
}
void passwordcal()
{
       if(pass==1234)
       {
           printf("\n**********************************************************");
           printf("\n\nLogin Successful");
           printf("\n\n**********************************************************\n");

           menu();
       }
       else
       {
           printf("\n**********************************************************");
           printf("\n\nWrong Password\nTry Again");
           printf("\n\n**********************************************************\n");

           user();
       }
}
void menu()
{
    printf("\n\n\t ^\n");
    printf("\t< >\tOH TEXTILES\n");
    printf("\t !\n\n");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$_MENU_$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
    printf("CODE\t\t ITEM        \t\t\tPRICE\n\n");
    printf("(001)\t\t jeans      \t\t\tRs1650\n");
    printf("(002)\t\t t-shirt    \t\t\tRs 760\n");
    printf("(003)\t\t frock      \t\t\tRs2190\n");
    printf("(004)\t\t skirt      \t\t\tRs 960\n");
    printf("(005)\t\t blouse     \t\t\tRs 850\n");
    printf("(006)\t\t shirt      \t\t\tRs1260\n");
    printf("(007)\t\t shoes      \t\t\tRs3400\n");
    printf("__________________________________________________________\n");

    cal();
}
void cal()
{
           printf("\n#");
           scanf("%d",&code);

           if(code==001)
           {
               printf("(001)\t jeans      \t\t\t1650 x");
               scanf("%d",&quen);
               jean=1650*quen;
               printf("\t\t\t\t\tRs%.2f",jean);

               cal();
           }
           else if(code==002)
           {
               printf("(002)\t t-shirt    \t\t\t 760 x");
               scanf("%d",&quen);
               tshir=760*quen;
               printf("\t\t\t\t\tRs%.2f",tshir);

               cal();
           }
           else if(code==003)
           {
               printf("(003)\t frock      \t\t\t2190 x");
               scanf("%d",&quen);
               fro=2190*quen;
               printf("\t\t\t\t\tRs%.2f",fro);

               cal();
           }
           else if(code==004)
           {
               printf("(004)\t skirt      \t\t\t 960 x");
               scanf("%d",&quen);
               skir=960*quen;
               printf("\t\t\t\t\tRs%.2f",skir);

               cal();
           }
           else if(code==005)
           {
               printf("(005)\t blouse     \t\t\t 850 x");
               scanf("%d",&quen);
               blou=850*quen;
               printf("\t\t\t\t\tRs%.2f",blou);

               cal();
           }
           else if(code==006)
           {
               printf("(006)\t shirt      \t\t\t1260 x");
               scanf("%d",&quen);
               shir=1260*quen;
               printf("\t\t\t\t\tRs%.2f",shir);

               cal();
           }
           else if(code==007)
           {
               printf("(007)\t shoes      \t\t\t3400 x");
               scanf("%d",&quen);
               shoe=3400*quen;
               printf("\t\t\t\t\tRs%.2f",shoe);

               cal();
           }
           else if(code==000)
           {
               total();
           }
           else
           {
               printf("wrong code...");

               cal();
           }
}
void total()
{
        printf("__________________________________________________________");
        tot=jean+tshir+fro+blou+skir+shir+shoe;
        printf("\nTotal\t:\t\t\t\tRs%.2f",tot);
        printf("\nPayment\t:\t\t\t\tRs");
        scanf("%d",&pay);/*

        if(pay<tot)
        {
            printf("\n\n**********************************************************");
            printf("\n\nNot Enough Money ???");
            printf("\n\n**********************************************************");
            printf("\n\n\n\n\n");
        }
        else
        {*/
            bal=pay-tot;
            printf("__________________________________________________________");
            printf("\nBalance\t:\t\t\t\tRs%.2f",bal);

            printf("\n\n\n**********************************************************");
            printf("\n\nThank You !!!");
            printf("\n\n**********************************************************");
            printf("\n\nNext Customer Please");
            printf("\n\n**********************************************************");
            printf("\n\n\n\n\n");
//        }
}
void main()
{
        user();
}
