#include<stdio.h>
#include<string.h>

#define MAX_ITEMS 100
struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};
int main() {
    struct Item inventory[MAX_ITEMS];
    int choice, count = 0;

    while (1) {
        printf("\nInventory Management System\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search by ID\n");
        printf("4. Search by Name\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            if (count >= MAX_ITEMS) {
                printf("Inventory full!\n");
                continue;
            }
            printf("Enter Item ID: ");
            scanf("%d", &inventory[count].id);
            getchar();
            printf("Enter Item Name: ");
            fgets(inventory[count].name, sizeof(inventory[count].name), stdin);
            inventory[count].name[strcspn(inventory[count].name, "\n")] = 0;
            printf("Enter Quantity: ");
            scanf("%d", &inventory[count].quantity);
            printf("Enter Price: ");
            scanf("%f", &inventory[count].price);
            count++;
            printf("Item added successfully!\n");
        }

        else if (choice == 2) {
            printf("\n--- Item List ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                       inventory[i].id, inventory[i].name,
                       inventory[i].quantity, inventory[i].price);
            }
        }

        else if (choice == 3) {
            int searchID, found = 0;
            printf("Enter ID to search: ");
            scanf("%d", &searchID);
            for (int i = 0; i < count; i++) {
                if (inventory[i].id == searchID) {
                    printf("Found: ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                           inventory[i].id, inventory[i].name,
                           inventory[i].quantity, inventory[i].price);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("Item not found!\n");
        }

        else if (choice == 4) {
            char searchName[50];
            int found = 0;
            printf("Enter name to search: ");
            getchar();
            fgets(searchName, sizeof(searchName), stdin);
            searchName[strcspn(searchName, "\n")] = 0; // Remove newline

            for (int i = 0; i < count; i++) {
                if (strcmp(inventory[i].name, searchName) == 0) {
                    printf("Found: ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                           inventory[i].id, inventory[i].name,
                           inventory[i].quantity, inventory[i].price);
                    found = 1;
                }
            }
            if (!found) printf("Item not found!\n");
        }

        else if (choice == 5) {
            printf("Exiting...\n");
            break;
        }

        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
