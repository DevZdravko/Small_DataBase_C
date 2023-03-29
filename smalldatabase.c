#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 50
#define MAX_PHONE_LENGTH 15
#define MAX_RECORDS 100

// Structure to hold a record
struct record {
    char name[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char phone[MAX_PHONE_LENGTH];
};

int main() {
    struct record database[MAX_RECORDS];
    int num_records = 0;
    
    // Adding a record
    strcpy(database[num_records].name, "John Doe");
    strcpy(database[num_records].email, "john.doe@example.com");
    strcpy(database[num_records].phone, "123-456-7890");
    num_records++;

    // Adding another record
    strcpy(database[num_records].name, "Jane Smith");
    strcpy(database[num_records].email, "jane.smith@example.com");
    strcpy(database[num_records].phone, "987-654-3210");
    num_records++;

    // Displaying all records
    printf("All records:\n");
    for (int i = 0; i < num_records; i++) {
        printf("%s, %s, %s\n", database[i].name, database[i].email, database[i].phone);
    }
    
    return 0;
}

