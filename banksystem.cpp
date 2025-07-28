#include <stdio.h>
#include<string.h>
void number(){
    float account;
            printf(" \nenter your account number:");
       scanf("\n%f",&account);
       if(account<555||account>555){
           printf("invalid account number");
       }
}
int main() {
         char name[20];
        float acc,an=555,money=0;
        int choice;
      
   while(1){
   printf("\n\n welcome to coder bank ");
   printf("\n  options:");
   printf("\n 1.create account ");
   printf("\n 2.deposit money");
   printf("\n 3.withdrew money");
   printf("\n 4. cheak account");
   printf("\n 5. take loan");
   printf("\n 6. exit");
   printf("\n\n enter your choice: ");
   scanf("%d",&choice);
   switch(choice)
   { 
       case 1:
       printf("\ncreate your account");
      printf("\nenter your name:");
       scanf("%s",&name);
      printf("\nsuccessfull create your account");
      printf("\nyour account number:%.0f \n",an);
     break;
      case 2:
      printf("  \ndeposit money");
  number();
       printf("\nenter tha amount: ");
      scanf("%f",&acc);
        money+=acc;
      printf("successfully deposit Rs=%f ",money);
      printf("\ncurrent amount is = %f",money);
       break;
      case 3:
      printf("\nwithdraw money");
     number();
        printf(" enter tha amount withdraw:");
       scanf("%f",&acc);
       money-=acc;
       printf("\nsuccessfully withdraw Rs=%f",money);
       printf("\ncurrent amount is = %f ",money);
     break;
     case 4:
        printf("\n cheak balence\n");
          number();
        printf(" your current balence is=%f",money);
       break;
       case 5:
       printf("\n take loan");
       	float si,p,r=9.0,t;
 number();
     printf("\nenter tha p:");
	scanf("%f",&p);
	printf("enter tha t:");
	scanf("%f",&t);
	printf("si=%f per month ",p*r*t/100);
	 break;
      case 6:
       printf("\n close tha bank: \n");
       printf("bank time:10 AM TO 5PM");
       break;
       default:
       printf("\n invalid choice");
      return 0;
   }
   }
   }
 
   



  
