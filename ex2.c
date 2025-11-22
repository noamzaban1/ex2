/******************
Name:noam zaban
ID:212052674
Assignment:2
*******************/

#include <stdio.h>

int main()
{
    // MAIN MENU LOOP

int pick = 0;
while (pick != 6){

printf("Welcome to our game, please choose an option:\n");
printf("1. Ducky's Unity Game\n");
printf("2. The Memory Game\n");
printf("3. Professor Pat's Power Calculation\n");
printf("4. The Duck Parade\n");
printf("5. The Mystery of the Repeated Digits\n");
printf("6. Good Night Ducks\n");
scanf("%d", &pick);

if (pick == 1){
     // TASK 1: Ducky's Unity Game
     printf("please enter a positive number:\n");
     int number;
     int count = 0;
     scanf("%d", &number);
     while(number <= 0 ){
       printf("Invalid number, plaese try again\n"); 
       scanf("%d", &number);
     }
     while (number > 0){
        if ((number & 1) == 1){
            count++;
        }
        number = number >> 1; 
     }
     printf("Ducky earns %d corns\n", count);

     }

else if (pick == 2 ){
     // task 2
     printf("please enter the numbers of ducks:\n");
     int ducks, choise=0;
     unsigned long long memorey = 0;
     scanf("%d", &ducks);
     while(ducks <= 0 ){
       printf("Invalid number, plaese try again\n"); 
       scanf("%d", &ducks);
     }
     printf("you entered %d ducks\n", ducks);

     //data for each duck
     for (int i=0; i<ducks; i++){
        printf("duck %d do QUAK? 1 for yes, 0 for no\n", i+1);
        scanf("%d", &choise);

        while (choise!=0 && choise!=1)
        {
            printf("Invalid number, plaese try again\n"); 
            scanf("%d", &choise);
        }

        if(choise == 1){
            memorey=memorey | (1ULL << i);
        }
    }
    //summery
        for(int i=0; i<ducks; i++){

        int result = (memorey >> i) & 1; 

        if (result == 1)
        {
            printf("duck number %d do Quak\n", i+1);
        }else if (result==0) {
            printf("duck number %d do Sh..\n", i+1);
        }
     }
}

else if (pick == 3){
    int number, exp;
    printf("please enter the number\n");
    scanf("%d", &number);
    while(number<0){
          printf("Invalid number, plaese try again\n"); 
         scanf("%d", &number);
    }
    printf("please enter the exponent\n");
    scanf("%d", &exp);
     while(exp<0){
          printf("Invalid number, plaese try again\n"); 
         scanf("%d", &exp);
    }
    if(number==0){
        printf("your power is: 0\n");
    } else if(exp==0){
 printf("your power is: 1\n");
    } else{
        int sum=1;
        for(int i=0;i<exp;i++){
            sum=sum*number;
        }
         printf("your power is: %d\n", sum);
    }
}

else if (pick == 4){
    int choise;
    printf("please enter number of ducks:\n");
    scanf("%d", &choise);
    while(choise<1){
        printf("Invalid number, plaese try again\n"); 
            scanf("%d", &choise);
    }
while (choise >0)
{
    int batch;
    if (choise >= 10) {
            batch = 10;
        } else {
            batch = choise;
        }
        for (int i = 0; i < batch; i++) {
            printf("   _\t\t");
        }
        printf("\n");
        for (int i = 0; i < batch; i++) {
            printf("__(o)>\t\t");
        }
        printf("\n");
        for (int i = 0; i < batch; i++) {
            printf("\\___)\t\t");
        }
        printf("\n\n"); 
        choise = choise - batch;
}

}

else if (pick == 5){
     int number;
    printf("please enter number\n");
    scanf("%d", &number);
    while(number<1){
          printf("Invalid number, plaese try again\n"); 
         scanf("%d", &number);
    }
int help = number;
int sfarot;
while(number!=0){
help= help/10;
sfarot++;
}

  for(int i=0; i<sfarot;i++)  {
int ezra=number %10;
int ezra2=number /10;
for(int i=0;i<sfarot-1;i++){
    if (ezra==ezra2%10){
        printf("%d appears more than one!\n", ezra);
    }
    ezra2=ezra2/10;
}
number=number/10;
sfarot--;
  }
}

else if (pick < 1 || pick > 6){
    printf("Invalid option, please try again\n");
}
}
printf("Good night! See you at the pond tomorrow.\n");

 // TASK 3: Professor Pat's Power Calculation

    // TASK 4: The Duck Parade

    // TASK 5: The Mystery of the Repeated Digits

    // TASK 6: EXIT

    // dont forget through all the necessary parts to validate invalid input.
    return 0;
}
