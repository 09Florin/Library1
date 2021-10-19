# Library1
Library project for the 1st CS year


This is a poorly project for library management I had to create for the Alghoritms Design course in my first academic year of Automatics, Computers and Electronics Faculty of University of Craiova.

                                                       <p align="center">  Problem’s statements  </p>


   Developing a software for library management. The library has a set of books, each one with an unique title and a set of one or more authors. An author can co-author one or more books. An author has an unique pair containing his/her given name and family name.

   The problem should be efficient, avoiding redundant information, using linked lists.
 
  The most important operations the software must initialize are:

-	Adding a book to the library;
-	Determining the list of books co-authored by a given author;
-	Determining the list of authors that co-authored a given book.

   The problem must be implemented in a compiler containing minimum 2 ‘’ .c ‘’ files and 1 header file (‘’.h’’).
   The program must successfully compile and build. It has to follow the C99 standard, be written in C coding style and commented. 

                                                       <p align="center">  Results and Conclusions  </p>


   The results satisfies every main condition of the assignment. The program works fine for every input variable that doesn’t exceed the 100 characters limit for title, author and co-author. The program works for maximum 10 co-authors per book, considering that, a larger number is ridiculous and very unrealistic. If the user enters a number larger than 10, the program prints an error message and asks the user to enter a number of co-authors between 1 and 10.
   The cpu time is directly influenced by the user’s time to enter the inputs because of the manual menu of the library which allows the user to add every book he wants.
   The functions for adding a book, listing all the co-authors of a searched book and listing all the books an author co-authored are working at full capacity.
   The menu is realised in a way that makes the program being very practical.
   

   For me, the most challenging function was the one which requires listing every book co-authored by a given author and working with the spaced strings and buffers.
   I know that I made a naive implementation, but for me, for my actual level and knowledge, the results are very satisfying.
   
   
   
