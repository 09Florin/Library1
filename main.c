#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
#include "algorithms.h"



char temp;
/// Main.c where we appeal the functions
int main()
{


struct Library *head = malloc(sizeof(struct Library)); // Pointer for the head of the list
head->next = NULL; // Fixing the end of the list by pointing the next element into NULL


int k; // Variable used for user's intentions
int b; // Variable used to verify if the user wants to perform other actions
char title[100]; // Char variable used to search a book by it's title
char author[100]; // Char variable used to search a book by it's author


do { /// do while function to display the following messages at least once
printf("Welcome to our library! \n \n \n \nWhat action do you want to perform? \n \n1. Add a new book in the library \n2. Determine the list of books co-authored by a given author \n" );
printf("3. Determine the list of authors that co-authored a given book \n\n");

printf ("Choose the number corresponding to your intentions:"); // Asking the user to point his choice
scanf ("%d", &k); // Reading the user's choice






     while (k!=1 && k!=2 && k!=3) // while loop to constraint the user to introduce a valid number between 1 and 3
{
            printf("[Error] Please insert a valid number: \n");
            fflush(stdin); // cleaning the buffer
            scanf("%d", &k);
}




    if (k == 1){ // The number 1 corresponds with the action of adding a new book in the library
       add_book( head, book); // Appealing the ''add_book'' function
}

    if (k == 2){ // The number 2 corresponds with the action of searching an author and display the books he helped to write
        printf ("Introduce the author you are looking for: ");
        scanf("%c",&temp);
        scanf("%[^\n]", author ); // Reading the author the user is looking for
        search_by_author(head, author); // Appealing the function ''search_by_author''
}

    if (k == 3){ // The number 3 corresponds with the action of searching a book and display it's co-authors if there are any
       printf("Introduce the book you are looking for: ");
       scanf("%c",&temp);
       scanf("%[^\n]", title ); // Scanning the title
       search_by_book(head, title); // Appealing the function ''search_by_book''
}



printf("Do you want to perform another action? Yes = 1/No = 0: "); // Asking the user if he wants to perform an other action
scanf ("%d", &b); // Reading it's answer
printf("\n\n\n");



} while (b==1); // Condition for the do while loop to test if the program keeps running and performing other actions or if the program should stop running



free (head); // Free the memory of the list

    return 0;

}
