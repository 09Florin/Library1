#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algorithms.h"

char temp;

/// Source code for every function algorithm used in main.c
// 1 Function for adding a new book in the library
int add_book(struct Library *head ,struct Book book){
    struct Library *new_book = malloc(sizeof(struct Library)); // New book's pointer
    struct Library *iterator = head; // The iterator used to find the end of the likned list so we can add the book
    struct Library *last_book; // Pointer used to remember the the last book before adding the new book so we can link the books
    int test; // Variable used to test if the book has co-authors
    int i; // Iterator variable used to count the co-authors
    int k; // Variable used to remember the total number of co-authors


    while (iterator->next != NULL) { // Finding the last position of the linked list by looking for the null element
        iterator = iterator->next; // Incrementing the iterator to make the while function having an end
    }
    last_book = iterator; // The last book is at the position the iterator is at the ending of the while loop

    last_book->next = new_book; // Putting the new book after the previous last book

    printf("Introduce book's name: "); // Asking the user to introduce the added book's title
    scanf("%c",&temp); // Cleaning the buffer
    scanf("%[^\n]", &book.Title ); // Reading the title for the new book
    strcpy(new_book->info_title,book.Title); // Copying the title of the new added book from the structure Book to the list's new element info_title from the structure Library

    printf("Introduce book's author: "); // Asking the user to introduce the new added book's author
    scanf("%c",&temp);
    scanf("%[^\n]", &book.Author ); // Reading the author of the new book
    strcpy(new_book->info_author,book.Author); // Copying the author of the new added book from the structure Book to the list's new element info_author from the structure Library

    printf("Does the book have co-authors? Yes = 1/No = 0: "); // Asking the user if the book has co-authors
    scanf("%d", &test); // Reading the user's answer into the variable '' test ''

    if (test == 0){ // Comparing the answers
        strcpy(new_book -> info_co_author1, "None");} // If '' test '' is 0 it means the book has no co-authors so we write '' None '' in the info_co_author1 from the structure Library

    else { do {                                                     // If the test variable isn't 0 it means the book has co-authors. It is used a do while loop because if the previous answer was different from 0, the book has at least 1 co-author
               printf("How many co-authors does the book have?: "); // Asking the user to introduce the number of co-authors the book has.
               scanf("%d", &k); // Scanning the user's answer into the variable '' k '' which will remember the total number of co-authors the book has.

               do { if (k<=10){ // a do while loop so the messages displayed to user to apper only once
                    i=1; // the iterator starts from 1 because the book has at least 1 co-author at this moment

                    printf("Introduce the book's co-author(s): "); // Displaying the message

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author1); // Scanning the name of the co-author of the name 1st co-author if the book has more co-authors
                    strcpy(new_book->info_co_author1,book.Co_author1); // Copying the name of the co-author's name from the structure Book to the info_co_author1 of the structure Library which belongs to the linked list
                    if (i+1 > k) break; // If the incremented value of ''i'' is greater than ''k'' it means it exceeds the number of co-authors the book has so we break the loop and the book now has all the co-authors noted
                    else i++; // If the incremented value of ''i'' doesn't exceed the number of co-authors the book has represented by ''k'' the loop continues to add the co-authors

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author2); // At this point the book has more than 1 co-authors. Now it is scanned the name of the 2nd co-author
                    strcpy(new_book->info_co_author2,book.Co_author2); // Copying the name of the co-author's name from the structure Book to the info_co_author2 of the structure Library which belongs to the linked list
                    if (i+1 > k) break; // Testing if the book has more co-authors to add or not
                    else i++;

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author3); // -//-
                    strcpy(new_book->info_co_author3,book.Co_author3); // -//-
                    if (i+1 > k) break; // -//-
                    else i++;

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author4); // -//-
                    strcpy(new_book->info_co_author4,book.Co_author4); // -//-
                    if (i+1 > k) break; // -//-
                    else i++;

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author5); // -//-
                    strcpy(new_book->info_co_author5,book.Co_author5); // -//-
                    if (i+1 > k) break; // -//-
                    else i++;

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author6); // -//-
                    strcpy(new_book->info_co_author6,book.Co_author6); // -//-
                    if (i+1 > k) break; // -//-
                    else i++;

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author7); // -//-
                    strcpy(new_book->info_co_author7,book.Co_author7); // -//-
                    if (i+1 > k) break; // -//-
                    else i++;

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author8); // -//-
                    strcpy(new_book->info_co_author8,book.Co_author8); // -//-
                    if (i+1 > k) break; // -//-
                    else i++;

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author9); // -//-
                    strcpy(new_book->info_co_author9,book.Co_author9); // -//-
                    if (i+1 > k) break; // -//-
                    else i++;

                    scanf("%c",&temp);
                    scanf("%[^\n]", &book.Co_author10); // -//-
                    strcpy(new_book->info_co_author10,book.Co_author10); // -//-
                    i++; // Incrementing the value of '' i '' so the condition of while will be false and end the next possible loop

     }
                   else printf("ERROR! Too many co-authors, please try introducing the main co-authors ( maximum 10 )! \n"); // A message displayed if the number of co-authors the user want to introduce is greater than 10. The user is asked to enter a new number of co-authors considering a book would be easier to manage and less ridiculous with a few co-authors
                 }
           while (i <=k ); // The condition for the iterator to be less than the number of co-authors

    } while (k>10); // The condition for the number of co-authors to be greater than 10 so the program asks the user to insert a new number of co-authors less than 10 ( line no. 36 and 37 )
    }


    new_book->next = NULL; // Leading the next of the new added book to Null so we can end the linked list
    return 0;
}
// 3 Function to search a book and display it's co-authors
int search_by_book(struct Library *head, char titlu[]){
struct Library *searched_book = malloc(sizeof(struct Library)); // Searched book's pointer
struct Library *iterator = head; // Iterator used to find the book the user is looking for
char verify[100]; // Variable used to verify if the user found the book he is looking for
char coauth[100]; // Variable used to storage the name of the co-authors
char auth[100]; // Variable used to storage the name of the author of the book the user is looking for
int verdict; // Variable used to test if the ''verify'' is the same as ''titlu''
int n;

while(iterator->next != NULL){ // While loop used to search the book
     strcpy(verify,iterator->next->info_title); // Copying the title from the current book into ''verify''
     verdict = strcmp(verify, titlu); // Strcmp compares ''verify'' and ''titlu''. The result is stored in ''verdict''
     if (verdict == 0) break; // If verdict is equal with 0 it means ''verify'' and ''titlu'' are the same and the book was found and we breake the loop
         iterator = iterator -> next; // If not, the iterator goes to the next book
}

if (verdict != 0) {printf("Sorry! We don't own this book in the library\n");} // If the list ended and the book was not found we display a message to the user to announce the user about the results

else {
searched_book = iterator->next; // The next book after the iterator is the book the user is looking for

strcpy(auth,searched_book->info_author); // Copying the author's name in variable ''auth''
printf("The following list shows every author that co-authored %s", verify );
printf(" by %s", &auth);
printf(":\n\n");
strcpy(coauth,searched_book->info_co_author1); // Copying the first co-author's name in the variable ''coauth''
printf("%s \n", &coauth); // Displaying the first co-author

strcpy(coauth,searched_book->info_co_author2); // Copying the second co-author's name in the variable ''coauth'' if it is the case
printf("%s \n", &coauth); // Displaying the second co-author if it is the case

strcpy(coauth,searched_book->info_co_author3); // -//-
printf("%s \n", &coauth); // -//-

strcpy(coauth,searched_book->info_co_author4); // -//-
printf("%s \n", &coauth); // -//-

strcpy(coauth,searched_book->info_co_author5); // -//-
printf("%s \n", &coauth); // -//-

strcpy(coauth,searched_book->info_co_author6); // -//-
printf("%s \n", &coauth); // -//-

strcpy(coauth,searched_book->info_co_author7); // -//-
printf("%s \n", &coauth); // -//-

strcpy(coauth,searched_book->info_co_author8); // -//-
printf("%s \n", &coauth); // -//-

strcpy(coauth,searched_book->info_co_author9); // -//-
printf("%s \n", &coauth); // -//-

strcpy(coauth,searched_book->info_co_author10); // -//-
printf("%s \n", &coauth); // -//-
}

return 0;

}



//2 Function to search an author and display every book he helped to write
int search_by_author(struct Library *head, char autor[]){
struct Library *iterator = head; // Iterator used to find the author
char verify[100]; // Variable to verify if we found the author
char title[100]; // Variable used to copy the title of the book into
int verdict; // Variable used to test if we found the author the user is looking for
int test=0; // Variable used for an if condition
char author[100];
strcpy(author,autor);
printf("\nLet's find out what books %s co-wrote\n", author);

while(iterator->next != NULL){ // While loop used to find the author
      strcpy(verify,iterator->next->info_co_author1); // Copying the first co-author in the variable ''verify''
      verdict = strcmp(verify, author); // Comparing the ''verify'' char varible with the author's name
      if (verdict == 0) { // If ''verdict'' is 0 it means we found the author
          strcpy(title,iterator->next->info_title); // Copying the book's title in the variable ''title''
          printf("%s\n",title);
          test++; // ''test'' variable is incremented and that's means we found the author the user is looking for
}

strcpy(verify,iterator->next->info_co_author2); // -//-
verdict = strcmp(verify, autor); // -//-
if (verdict == 0)  { // -//-
        strcpy(title,iterator->next->info_title); // -//-
        printf("%s\n",title);
        test++; // -//-
}

strcpy(verify,iterator->next->info_co_author3); // -//-
verdict = strcmp(verify, autor); // -//-
if (verdict == 0)  { // -//-
        strcpy(title,iterator->next->info_title); // -//-
        printf("%s\n",title);
        test++; // -//-
}

strcpy(verify,iterator->next->info_co_author4); // -//-
verdict = strcmp(verify, autor); // -//-
if (verdict == 0)  { // -//-
        strcpy(title,iterator->next->info_title); // -//-
        printf("%s\n",title);
        test++; // -//-
}

strcpy(verify,iterator->next->info_co_author5); // -//-
verdict = strcmp(verify, autor); // -//-
if (verdict == 0)  { // -//-
        strcpy(title,iterator->next->info_title); // -//-
        printf("%s\n",title);
        test++; // -//-
}

strcpy(verify,iterator->next->info_co_author6); // -//-
verdict = strcmp(verify, autor); // -//-
if (verdict == 0)  { // -//-
        strcpy(title,iterator->next->info_title); // -//-
        printf("%s\n",title);
        test++; // -//-
}

strcpy(verify,iterator->next->info_co_author7); // -//-
verdict = strcmp(verify, autor); // -//-
if (verdict == 0)  { // -//-
        strcpy(title,iterator->next->info_title); // -//-
        printf("%s\n",title);
        test++; // -//-
}

strcpy(verify,iterator->next->info_co_author8); // -//-
verdict = strcmp(verify, autor); // -//-
if (verdict == 0)  { // -//-
        strcpy(title,iterator->next->info_title); // -//-
        printf("%s\n",title);
        test++; // -//-
}

strcpy(verify,iterator->next->info_co_author9); // -//-
verdict = strcmp(verify, autor); // -//-
if (verdict == 0)  { // -//-
        strcpy(title,iterator->next->info_title); // -//-
        printf("%s\n",title);
        test++; // -//-
}

strcpy(verify,iterator->next->info_co_author10); // -//-
verdict = strcmp(verify, autor); // -//-
if (verdict == 0)  { // -//-
        strcpy(title,iterator->next->info_title); // -//-
        printf("%s\n",title);
        test++; // -//-
}

iterator = iterator -> next; // Incrementing the iterator so the loop can find it's end
}

if (test == 0) printf("\nSorry! It seems we don't have any book co-authored by %s \n", autor ); // If ''test'' is 0 it means the author wasn't found
return 0;
}





