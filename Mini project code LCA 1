#include <stdio.h>
#include <string.h>

struct Vehicle {
    int id;
    char name[50];
    int rent_per_day;
    int isAvailable;
};

struct Vehicle v[100]; // array to store vehicles
int count = 0; // number of vehicles

// Add Vehicle
void addVehicle() {
    printf("\n--- Add Vehicle ---\n");

    printf("Enter ID: ");
    scanf("%d", &v[count].id);

    printf("Enter Name: ");
    scanf(" %[^\n]", v[count].name);

    printf("Enter Rent per Day: ");
    scanf("%d", &v[count].rent_per_day);

    v[count].isAvailable = 1;
    count++;

    printf("Vehicle added successfully!\n");
}

// Display Vehicles
void displayVehicles() {
    if (count == 0) {
        printf("No vehicles found!\n");
        return;
    }

    printf("\n--- Vehicle List ---\n");

    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Rent: %d | Available: %s\n",
               v[i].id, v[i].name, v[i].rent_per_day,
               v[i].isAvailable ? "Yes" : "No");
    }
}

// Rent Vehicle
void rentVehicle() {
    int id, found = 0;

    printf("Enter Vehicle ID to Rent: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (v[i].id == id) {
            found = 1;
            if (v[i].isAvailable) {
                v[i].isAvailable = 0;
                printf("Vehicle rented successfully!\n");
            } else {
                printf("Vehicle already rented!\n");
            }
            break;
        }
    }

    if (!found)
        printf("Vehicle not found!\n");
}

// Return Vehicle
void returnVehicle() {
    int id, found = 0;

    printf("Enter Vehicle ID to Return: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (v[i].id == id) {
            found = 1;
            if (!v[i].isAvailable) {
                v[i].isAvailable = 1;
                printf("Vehicle returned successfully!\n");
            } else {
                printf("Vehicle is already available!\n");
            }
            break;
        }
    }

    if (!found)
        printf("Vehicle not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Vehicle Rental System =====\n");
        printf("1. Add Vehicle\n");
        printf("2. Display Vehicles\n");
        printf("3. Rent Vehicle\n");
        printf("4. Return Vehicle\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addVehicle();
                break;
            case 2:
                displayVehicles();
                break;
            case 3:
                rentVehicle();
                break;
            case 4:
                returnVehicle();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
