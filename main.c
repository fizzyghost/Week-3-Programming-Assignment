#include <stdio.h>


int entCount;
int entTotal;
int ent[100];
int choice;
int rusure = 0;
int sum = 0;
int aver = 0;
int max = 0;
int min = 999999999;



int main()
{
    do {
        choice = 0;
        printf("Menu\n");
        printf("----------\n");
        printf("1. Gather Data\n");
        printf("2. Display Report\n");
        printf("3. Exit Menu\n");
        scanf("%d", &choice);

        if(choice == 1)
        {
            do
            {
                sum = 0;
                aver = 0;
                max = 0;
                min = 999999999;
                printf("Instructions: Enter the number of integers you'll be entering in and enter the integers after. You will be sent to the main menu after the integers have been inputted correctly.\n");
                printf("----------\n");
                printf("How many integers will you enter?");
                scanf("%d", &entTotal);
                for (entCount = 0; entCount != entTotal; entCount++) {
                    printf("Integer %d:", entCount + 1);
                    scanf("%d", &ent[entCount]);
                    sum = sum + ent[entCount];
                    if (max < ent[entCount]) {
                        max = ent[entCount];
                    }
                    if (min > ent[entCount]) {
                        min = ent[entCount];
                    }





                }
                aver = sum / entTotal;
                printf("Are you sure you want to complete the gathering data section of this program?\n");
                printf("1. Yes, I am sure.\n");
                printf("0. No, I need to start over.\n");
                scanf("%d", &rusure);
            }while(rusure != 1);



            }

        if(choice == 2)
        {
            printf("The Average of the Integers is: %d\n", aver);
            printf("The Sum of the Integers is: %d\n", sum);
            printf("The Minimum Integer in this set is: %d\n", min);
            printf("The Maximum Integer in this set is: %d\n", max);
        }



    }
    while(choice != 3);



    return (0);
}