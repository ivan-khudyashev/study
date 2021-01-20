// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>

void displayMenu(void);
int chooseMenuOption(int lowValue, int highValue);
void actOnUsersInput(void);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    actOnUsersInput();

    printf("\nFinish Program!\n");
    return 0;
}

/* a */
void displayMenu(void)
{
    const char menuMsg[] =
        "Please choose one of the following:"
        "\n1) copy files              2) move files"
        "\n3) remove files            4) quit"
        "\nEnter the number of your choice:";
    printf(menuMsg);
}

/* b */
int chooseMenuOption(int lowValue, int highValue)
{
    int usersInput = 0;
    do {
        displayMenu();
        if(scanf("%d", &usersInput) < 1) {
            return highValue;
        }
    }
    while(usersInput < lowValue || usersInput > highValue);
}

/* c */
void actOnUsersInput(void)
{
    int startOption = 1, quitOption = 4;
    int choosedValue;
    while((choosedValue = chooseMenuOption(startOption, quitOption)) != quitOption) {
        switch(choosedValue) {
            case 1:
                printf("Files have copied successfully\n");
                break;
            case 2:
                printf("Well, files have moved\n");
                break;
            case 3:
                printf("Oooh, files have removed (and can't be restored)\n");
                break;
            default:
                printf("Error. Wrong option item\n");
        }
    }
    printf("Ok. Exit\n");
}