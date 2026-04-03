#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define RESET "\x1B[0m"


struct Library {
    int BookNUM;
    char BookName[40];
    char BookType[40];
    char BookWritten[40];
    int BookYear;
    char BookLanguage[20];
};


struct Library books[100]; 
int bookCount = 0;


void AddBook();
void InventoryBook();
void DeleteBook();

int main() {
    int ProcNum;
    printf(GRN ":::: WELCOME TO BOOK LIBRARY INVENTORY SYSTEM :::: \n" RESET);

    do {
        printf("\n[0] Exit, [1] Add Book, [2] Inventory, [3] Delete Book \n");
        printf("Process: ");
        scanf("%d", &ProcNum);

        switch(ProcNum) {
            case 0:
                printf("Exiting...\n");
                break;
            case 1:
                AddBook();
                break;
            case 2:
                InventoryBook();
                break;
            case 3:
                DeleteBook();
                break;
            default:
                printf(RED "Invalid Entry!\n" RESET);
        }    
    } while(ProcNum != 0);

    return 0;
}


void AddBook() {
    printf("\nEnter Book Details (Number Name Category Writer Year Language):\n");
  
    scanf("%d %s %s %s %d %s", 
          &books[bookCount].BookNUM, 
          books[bookCount].BookName, 
          books[bookCount].BookType, 
          books[bookCount].BookWritten, 
          &books[bookCount].BookYear, 
          books[bookCount].BookLanguage);
    
    bookCount++;
    printf(GRN "Book added successfully!\n" RESET);
}


void InventoryBook() {
    printf("\n--- Library Inventory ---\n");
    for(int i = 0; i < bookCount; i++) {
        printf("ID: %d | Name: %s | Writer: %s | Year: %d\n", 
               books[i].BookNUM, books[i].BookName, books[i].BookWritten, books[i].BookYear);
    }
}

void DeleteBook() {
	bookCount = bookCount -1;
}
