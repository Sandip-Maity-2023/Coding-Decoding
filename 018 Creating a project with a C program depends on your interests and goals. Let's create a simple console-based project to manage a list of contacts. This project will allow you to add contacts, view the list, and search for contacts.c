#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a contact
struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

// Function to add a contact to the list
void addContact(struct Contact *contacts, int *numContacts) {
    if (*numContacts < 100) {
        struct Contact newContact;
        printf("Enter name: ");
        scanf("%s", newContact.name);
        printf("Enter phone: ");
        scanf("%s", newContact.phone);
        printf("Enter email: ");
        scanf("%s", newContact.email);

        contacts[*numContacts] = newContact;
        (*numContacts)++;

        printf("Contact added successfully!\n");
    } else {
        printf("Error: Maximum number of contacts reached.\n");
    }
}

// Function to display all contacts
void displayContacts(struct Contact *contacts, int numContacts) {
    printf("\n--- Contacts ---\n");
    for (int i = 0; i < numContacts; i++) {
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
        printf("-----------------\n");
    }
}

// Function to search for a contact by name
void searchContact(struct Contact *contacts, int numContacts, char *searchName) {
    int found = 0;
    for (int i = 0; i < numContacts; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("\n--- Contact Found ---\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            printf("---------------------\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
}

int main() {
    struct Contact contacts[100];  // Maximum of 100 contacts
    int numContacts = 0;
    int choice;
    char searchName[50];

    do {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(contacts, &numContacts);
                break;
            case 2:
                displayContacts(contacts, numContacts);
                break;
            case 3:
                printf("Enter name to search: ");
                scanf("%s", searchName);
                searchContact(contacts, numContacts, searchName);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
