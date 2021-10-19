#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED

/// Header file
// Structure used for the linked list
struct Library{
    char info_title[100]; // The title of the book
    char info_author[100]; // The author of the book
    char info_co_author1[100]; // 1st co-author if it is the case
    char info_co_author2[100]; // 2nd co-author if it is the case
    char info_co_author3[100]; // 3rd co-author if it is the case
    char info_co_author4[100]; // 4th co-author if it is the case
    char info_co_author5[100]; // 5th co-author if it is the case
    char info_co_author6[100]; // 6th co-author if it is the case
    char info_co_author7[100]; // 7th co-author if it is the case
    char info_co_author8[100]; // 8th co-author if it is the case
    char info_co_author9[100]; // 9th co-author if it is the case
    char info_co_author10[100]; // 10th co-author if it is the case
    struct Library *next; // Pointer next to link the list
};

// Structure used for the book's parameters
struct Book {
   char  Title[100]; // Book's title
   char  Author[100]; // Book's author
   char  Co_author1[100]; // Book's co-author if it is the case
   char  Co_author2[100]; // Book's co-author if it is the case
   char  Co_author3[100]; // Book's co-author if it is the case
   char  Co_author4[100]; // Book's co-author if it is the case
   char  Co_author5[100]; // Book's co-author if it is the case
   char  Co_author6[100]; // Book's co-author if it is the case
   char  Co_author7[100]; // Book's co-author if it is the case
   char  Co_author8[100]; // Book's co-author if it is the case
   char  Co_author9[100]; // Book's co-author if it is the case
   char  Co_author10[100]; // Book's co-author if it is the case


}book; // variable book of the structure ''Book''



int add_book(struct Library *head ,struct Book book); // Function to add a new book in the library
int search_by_book(struct Library *head, char titlu[]); // Function to search a book
int search_by_author(struct Library *head, char autor[]); // Function to search an author


#endif // ALGORITHMS_H_INCLUDED
