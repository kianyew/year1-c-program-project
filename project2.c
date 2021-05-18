#include<stdio.h>

fnRegister(int *pAge[10000], char *pName[10000][20], char *pGender[10000], int *pCond[10000])
{
int i=0, fnChoice;


do{
    printf("Entering info for patient no. %d\n\nEnter patient name: ");
    scanf(" %s", &*pName[i]);
    printf("Enter patient age: ");
    scanf("%d", &*pAge[i]);
    printf("Enter patient gender (m for male, f for female): ");
    scanf(" %c", &*pGender[i]);
    printf("Enter condition of patient (1 for infection, 2 for deficiency, 3 for hereditary, 4 for physiology, 5 for otherwise): ");
    scanf("%d", &*pCond[i]);

    printf("Data saved.");

    i++;
    printf("Do you want to continue? (enter 1 if yes, enter any other number to quit)");
    scanf("%d", &fnChoice);

    }while(fnChoice != 1);
}


fnSearch(int pAge[10000], char pName[10000][20], char pGender[10000], int pCond[10000])
{
int i, fnChoice;

do{
    printf("Enter patient number: ");
    scanf("%d", &i);
    printf("Patient name: %s\n\nPatient age: %d\n\nPatient gender: %c\n\nPatient condition (1 for infection, 2 for deficiency, 3 for hereditary, 4 for physiology, 5 for otherwise): %d\n\n", pName[i], pAge[i], pGender[i], pCond[i]);

    printf("Do you want to continue? (1 if yes, any other number to quit): ");
    scanf("%d", &fnChoice);
    }while(fnChoice != 1);
}

fnEdit(int *pAge[10000], char *pName[10000][20], char *pGender[10000], int *pCond[10000])
{
int i, fnChoice, contChoice;

do{
printf("Enter patient no.: ");
scanf("%d", &i);

printf("Patient name: %s\n\nPatient age: %d\n\nPatient gender: %c\n\nPatient condition (1 for infection, 2 for deficiency, 3 for hereditary, 4 for physiology, 5 for otherwise): %d\n\n", pName[i], pAge[i], pGender[i], pCond[i]);
printf("Select which info to edit (1 for patient name, 2 for age, 3 for gender, 4 for condition): ");
scanf("%d", &fnChoice);

    if(fnChoice==1)
    {
        printf("Enter new name: ");
        scanf(" %s", &*pName[i]);
    }
    else if(fnChoice==2)
    {
        printf("Enter new age: ");
        scanf("%d", &*pAge[i]);
    }
    else if(fnChoice==3)
    {
        printf("Enter new gender: ");
        scanf(" %c", &*pGender[i]);
    }
    else if(fnChoice==4)
    {
        printf("Enter new condition: ");
        scanf("%d", &*pCond[i]);
    }
    else
    {
        printf("Invalid input.");
    }

printf("Do you want to continue? (1 if yes, any other number to quit)");
scanf("%d", &contChoice);

}while(contChoice != 1);

}

void main()
{
int choice;
int pAge[10000];
char pName[10000][20];
char pGender[10000];
int pCond[10000];

printf("What would you like to do? (Enter 1 for registration of new patients, 2 for searching of patient record, 3 for record editing, 4 to quit)");
scanf("%d", &choice);

if(choice==1)
    {
    fnRegister(&pAge, &pName, &pGender, &pCond);
    }
else if(choice==2)
{
    fnSearch(pAge, pName, pGender, pCond);
}
else if(choice==3)
{
    fnEdit(&pAge, &pName, &pGender, &pCond);
}

}
