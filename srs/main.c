#include <calc.h>





#define VALID   (1)

#define INVALID (0)





unsigned int calculator_operation = 0;





int cal_operand1 = 0;

int cal_operand2 = 0;





enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, EXIT };





void calculator_menu(void);



int valid_operation(int operation);







int main(int argc, char *argv[])

{

    printf("\n****Calculator****\n");

    while(1)

    {

        calculator_menu();

    }

}



void calculator_menu(void)

{

    printf("\nAvailable Operations\n");

    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit");

    printf("\n\tEnter your choice\n");

   

     __fpurge(stdin);

    scanf("%d", &calculator_operation);



    if(EXIT == calculator_operation)

    {

        printf("\nThank you. Exiting the Application\n");

        exit(0);

    }



    if(INVALID != valid_operation(calculator_operation))

    {

        printf("\n\tEnter your Numbers with space between them\n");

        __fpurge(stdin);

        scanf("%d %d", &cal_operand1, &cal_operand2);

    }

    else

    {

        printf("\n\t---Wrong choice---\nEnter to continue\n");

        __fpurge(stdin);

        getchar();

        return;

        

    }

    switch(calculator_operation)

    {

        case ADD:

            printf("\n\t%d + %d = %d\nEnter to continue", 

            cal_operand1, 

            cal_operand2,

            add(cal_operand1, cal_operand2));

            

            __fpurge(stdin);

            getchar();

            break;

        case SUBTRACT:

            printf("\n\t%d - %d = %d\nEnter to continue", 

            cal_operand1, 

            cal_operand2,

            subtract(cal_operand1, cal_operand2));

            

            __fpurge(stdin);

            getchar();

            break;

        case MULTIPLY:

            printf("\n\t%d * %d = %d\nEnter to continue", 

            cal_operand1, 

            cal_operand2,

            multiply(cal_operand1, cal_operand2));

            

            __fpurge(stdin);

            getchar();

            break;

        case DIVIDE:

            printf("\n\t%d / %d = %d\nEnter to continue", 

            cal_operand1, 

            cal_operand2,

            divide(cal_operand1, cal_operand2));

            

            __fpurge(stdin);

            getchar();

            break;

        case 5:

            exit(0);

            break;

        default:

            printf("\n\t---It should never come here---\n");

    }

}



int valid_operation(int operation)

{

    /* Check if the operation is a valid operation */

    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;

}
