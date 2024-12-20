/******Jett&Kim******/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(void){

    printf("\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n");
    system ("COLOR E0");           //Color adjustment
    printf ("                                        \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
    printf ("                                        \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                        \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                        \t\t\t\t%c        HELLO_GOODMORNING         %c\n",186,186);
    printf ("                                        \t\t\t\t%c  [ PRESS ANY KEY TO CONTINUE ]   %c\n",186,186);
    printf ("                                        \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                        \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                        \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
    getch();


    system("cls");
    ///*Users Login/Users Registers*///
    #define MAX_USERS 100
    #define USERNAME_LENGTH 50
    #define PASSWORD_LENGTH 50
    #define FILENAME "users.txt"

    int choice_Users;
        printf("\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n\n");
        printf(" \t\t\t\t\t\t\t\t\t\t[1] Register\n");
        printf(" \t\t\t\t\t\t\t\t\t\t[2] Login\n");
        printf(" \t\t\t\t\t\t\t\t\t\t[3] Exit\n");
        printf("        \t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
        printf(" \t\t\t\t\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &choice_Users);

        switch(choice_Users){
            case 1:
                registerUser ();
                break;
            case 2:
                loginUser ();
                break;
            case 3:
                exit(0);
            default:
                printf("\t\t\t\t\t\t\t\t\t\tInvalid choice. Please try again.\n");
        }

    ////////*Welcome Console*/////
    other_console();
    getch();         //////to get a single character input directly without echoing the user to enter key to pressed to be continue
    ///////*Login Console*/////
    Already_Login();
    getch();
    /////*Pressing AnyKey*/////
    Press_anyKey();
    getch();
    /////*Menu_Employe*///////
    Menu_Employe();
    getch();


    return 0;
}
     ///*functions Users Login/Users Registers*///
    typedef struct {                      ///Typedef - allows the user  create a new name foe existing datatype
    char username[USERNAME_LENGTH];       ///Struct - is a composite datatype that groups the variable
    char password[PASSWORD_LENGTH];
   } User;

    void registerUser(){
    User user;
    FILE *file = fopen(FILENAME, "a"); //// Open file in append mode

    if (file == NULL) {
        printf(" \t\t\t\t\t\t\t\t\t\tError opening file!\n");
        return;
    }

    printf(" \t\t\t\t\t\t\t\t\t\tEnter username: ");
    scanf("%s", user.username);
    printf(" \t\t\t\t\t\t\t\t\t\tEnter password: ");
    scanf("%s", user.password);

    // Write user data to file                                       /// Open Files
    fprintf(file, "%s %s\n", user.username, user.password);         //// Write the Formating string to the file
    fclose(file);                                                    ////Is a versatile because it can send output any file or string
    printf(" \t\t\t\t\t\t\t\t\t\tRegistration successful!\n");
    exit(0);
}

    void loginUser(){
    User user;
    char username[USERNAME_LENGTH];
    char password[PASSWORD_LENGTH];
    int found = 0;

    printf(" \t\t\t\t\t\t\t\t\t\tEnter username: ");
    scanf("%s", username);
    printf(" \t\t\t\t\t\t\t\t\t\tEnter password: ");
    scanf("%s", password);

    FILE *file = fopen(FILENAME, "r"); // Open file in read mode

    if (file == NULL) {
        printf(" \t\t\t\t\t\t\t\t\t\tError opening file!\n");
        return;
    }

    // Read user data from file
    while (fscanf(file, "%s %s", user.username, user.password) != EOF) {
        if (strcmp(username, user.username) == 0 && strcmp(password, user.password) == 0) {
            found = 1;
            break;
        }
    }
    fclose(file);

    if (found) {
        printf(" \t\t\t\t\t\t\t\t\t\tLogin successful!\n");
        Sleep(1000);
        getch();
    } else {
        printf(" \t\t\t\t\t\t\t\t\t\tInvalid username or password.\n");
        exit(0);
    }
}
     ///* End Process*///

void other_console(){
    system("cls");                 ///Command to clear the console
    system ("COLOR 30");          //Color adjustment
    printf ("\n\n\n\n\n\n");
    printf("\n\n\n\n\n\n\n\n");
    printf ("                                        \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf ("                                        \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                        \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                        \t\t\t\t%c            WELLCOME^-^           %c\n",186,186);
    printf ("                                        \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                        \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
}
    ///*Login Console*///

void Already_Login(){
      system ("cls");            //clear system
      system ("COLOR 0A");
    printf ("\n\n\n\n\n\n");
    printf ("                                           \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf ("                                           \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                           \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                           \t\t\t\t%c           W E L C O M E          %c\n",186,186);
    printf ("                                           \t\t\t\t%c      =======================     %c\n",186,186);
    printf ("                                           \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                           \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
    printf ("                                           \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                           \t\t\t\t%c            YOU ALREADY           %c\n",186,186);
    printf ("                                           \t\t\t\t%c     ________________________     %c\n",186,186);
    printf ("                                           \t\t\t\t%c            BEEN LOGIN            %c\n",186,186);
    printf ("                                           \t\t\t\t%c              (^-^)               %c\n",186,186);
    printf ("                                           \t\t\t\t%c   ----------------------------   %c\n",186,186);
    printf ("                                           \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
}

void Press_anyKey(){
    system ("cls");                //clear system
    system ("COLOR 0A");
    printf ("\n\n\n\n\n\n");
    printf ("\n\n\n\n");
    printf ("                                           \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
    printf ("                                           \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                           \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                           \t\t\t\t%c  [ PRESS ANY KEY TO CONTINUE ]   %c\n",186,186);
    printf ("                                           \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                           \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                           \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
}
void Menu_Employe(){
    system("cls");               //Newline or empty console, clear screen*//
    printf ("\n\n\n\n\n\n");
    printf ("\n\n\n\n");
    printf ("                                          \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf ("                                          \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                          \t\t\t\t%c              MENU^-^             %c\n",186,186);
    printf ("                                          \t\t\t\t%c         Employed Profile         %c\n",186,186);
    printf ("                                          \t\t\t\t%c                                  %c\n",186,186);
    printf ("                                          \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,185);
    printf("\n\n\n");


    system("COLOR 20");          //COlOR Adjustment*//
    char my_name[20];
    char name[20];
    char age[3];
    char position[30];
    char department_task[40];
    float days=0,rate=0.00, solve_gross=0.00;
    float days_absent=0,sss=0.00, pag_ibig=0.00,bir=0.00;
    float philhealth=0.00,solve_net_salary=0.00;
    float total_deductions=0.00;
    //Intro*//
    printf ("\n\n\n\n");

    //Input Information*/////

    gets(name);
    printf("\n\t\t\t\t| Employed Name :");
    gets(my_name);
    printf("\n\t\t\t\t| Age :");
    gets(age);
    printf("\n\t\t\t\t| Position :");
    gets(position);
    printf("\n\t\t\t\t| Department Task :");
    gets(department_task);
    printf("\n\t\t\t\t| How Many Days Work :");
    scanf("%f", &days);
    printf("\n\t\t\t\t| DAYS ABSENT :   ");
    scanf("%f", &days_absent);
    printf("\n\t\t\t\t==============================");
    printf("\n\n");

    printf("\n\t\t\t\t| Salary Per day        : PHP ");
    scanf("%f", &rate);
    printf("\n\n");

    //Solving Salary Here*//

    solve_gross = (days * rate);

    printf("\n\t\t\t\t| GROSS SALARY     : PHP %.2f ", solve_gross);
    printf("\n\n");
    printf("\n\t\t\t\t| SSS CONTRIBUTION : PHP ");
    scanf("%f", &sss);
    printf("\n\t\t\t\t| PAG-IBIG CONTRIBUTION  : PHP ");
    scanf("%f", &pag_ibig);
    printf("\n\t\t\t\t| BIR CONTRIBUTION     : PHP ");
    scanf("%f", &bir);
    printf("\n\t\t\t\t| PHILHEALTH CONTRIBUTION : PHP ");
    scanf("%f", &philhealth);


    //Solving Total Deductions and Net SALARY Here*//

    total_deductions = (days_absent+sss+pag_ibig+bir+philhealth);
    solve_net_salary = (solve_gross - total_deductions);

    printf("\n\n\t\t\t\t|===============================|");
    printf("\n\n\t\t\t\t|    Display Payroll results    |");
    printf("\n\n\t\t\t\t| ----------------------------  |");
    printf("\n\n\t\t\t\t|===============================|");
    printf("\n\t");
    printf("\n\t\t\t\t| Gross Salary     : PHP %.2f\n", solve_gross);
    printf("\n\t\t\t\t| TOTAL Deductions : PHP %.2f\n", total_deductions);
    printf("\n\n\n\n");
    printf("\n\t\t\t\t| Net Salary       : PHP %.2f", solve_net_salary);
    printf("\n\n\n\n\n");
    getch();

   system("cls");
   system("COLOR 70");
   printf("\n\n\n");
   printf("\n\n  \t\t|=====================================|");
   printf("\n\n  \t\t|   P A Y S L I P__R E S U L T  ^-^   |");
   printf("\n\n  \t\t|=====================================|");

   printf("\n\n\n");
   printf("\n\t\t | Employed Name :%s", my_name);
   printf("\n\t\t");
   printf("\n\t\t | Age :%s", age );
   printf("\n\t\t");
   printf("\n\t\t | Position :%s", position);
   printf("\n\t\t");
   printf("\n\t\t | Department task :%s", department_task);
   printf("\n\t\t");
   printf("\n\t\t | Work Days :%.0f ", days);
   printf("\n\t\t");
   printf("\n\t\t | DAYS ABSENT :%.0f ",days_absent);
   printf("\n\t\t");
   printf("\n\t\t | Rate Per Day : PHP %.0f ", rate);
   printf("\n\t\t");
   printf("\n\t\t | SOLVE_GROSS  : PHP %.0f ", solve_gross);
   printf("\n\t\t");
   printf("\n\t\t | SSS CONTRIBUTION : PHP %.0f ", sss);
   printf("\n\t\t");
   printf("\n\t\t | PAG-IBIG CONTRIBUTION : PHP %.0f ", pag_ibig);
   printf("\n\t\t");
   printf("\n\t\t | BIR CONTRIBUTION : PHP %.0f ", bir);
   printf("\n\t\t");
   printf("\n\t\t | PHILHEALTH CONTRIBUTION : PHP %.0f ", philhealth);
   printf("\n\t\t");
   printf("\n\t\t | Gross Salary : PHP %.0f ", solve_gross);
   printf("\n\t\t");
   printf("\n\t\t | TOTAL Deductions : PHP %.0f ", total_deductions);
   printf("\n\t\t");
   printf("\n\t\t | Net Salary : PHP %.0f", solve_net_salary);
   printf("\n");
   printf("\n");
   exit(0);  // Exits the program with a status code of 0 (success)

}
