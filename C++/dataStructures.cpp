
// structure is another user defined data type which allows you to combine data items of different kinds
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

// typedef keyword - sort of an alias, can be used for primitive types also
typedef struct {
    char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Books;

int main( ) {
   struct Books Book1;        // Declare Book1 of type Book
   struct Books Book2;        // Declare Book2 of type Book
   Books book_tydef           // Declare the book wihtout using the struct keyword

   // you use the dot operator when dealing with structures
   // book 1 specification
   strcpy( Book1.title, "Learn C++ Programming");
   strcpy( Book1.author, "Chand Miyan");
   strcpy( Book1.subject, "C++ Programming");
   Book1.book_id = 6495407;

   // book 2 specification
   strcpy( Book2.title, "Telecom Billing");
   strcpy( Book2.author, "Yakit Singha");
   strcpy( Book2.subject, "Telecom");
   Book2.book_id = 6495700;

   // Print Book1 info
   cout << "Book 1 title : " << Book1.title <<endl;
   cout << "Book 1 author : " << Book1.author <<endl;
   cout << "Book 1 subject : " << Book1.subject <<endl;
   cout << "Book 1 id : " << Book1.book_id <<endl;

   // Print Book2 info
   cout << "Book 2 title : " << Book2.title <<endl;
   cout << "Book 2 author : " << Book2.author <<endl;
   cout << "Book 2 subject : " << Book2.subject <<endl;
   cout << "Book 2 id : " << Book2.book_id <<endl;

   // you can pass in a structure as a function argument as well

   // when you have a struct pointer you have to use the -> arrow operator to access its data like with classes
   return 0;
}