#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
    char address[100];
};

struct Contact contacts[100];
int count = 0;

void addContact();
void displayContacts();
void searchContact();

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== ADDRESS BOOK =====\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact();
            break;

        case 2:
            displayContacts();
            break;

        case 3:
            searchContact();
            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}

void addContact()
{
    if (count >= 100)
    {
        printf("Address Book Full!\n");
        return;
    }

    printf("\nEnter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone: ");
    scanf("%s", contacts[count].phone);

    printf("Enter Email: ");
    scanf("%s", contacts[count].email);

    printf("Enter Address: ");
    scanf(" %[^\n]", contacts[count].address);

    count++;

    printf("Contact Added Successfully!\n");
}

void displayContacts()
{
    int i;

    if (count == 0)
    {
        printf("No Contacts Found!\n");
        return;
    }

    printf("\n===== CONTACT LIST =====\n");

    for (i = 0; i < count; i++)
    {
        printf("\nName    : %s", contacts[i].name);
        printf("\nPhone   : %s", contacts[i].phone);
        printf("\nEmail   : %s", contacts[i].email);
        printf("\nAddress : %s\n", contacts[i].address);
    }
}

void searchContact()
{
    char searchName[50];
    int i, found = 0;

    if (count == 0)
    {
        printf("No Contacts Found!\n");
        return;
    }

    printf("Enter Name to Search: ");
    scanf(" %[^\n]", searchName);

    for (i = 0; i < count; i++)
    {
        if (strcmp(contacts[i].name, searchName) == 0)
        {
            printf("\nContact Found!\n");
            printf("Name    : %s\n", contacts[i].name);
            printf("Phone   : %s\n", contacts[i].phone);
            printf("Email   : %s\n", contacts[i].email);
            printf("Address : %s\n", contacts[i].address);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Contact Not Found!\n");
    }
}
