#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a Mobile
struct Mobile {
    char company_name[50];
    char color[20];
    char model[50];
    float price;
};

int main() {
    int n;

    printf("Enter the number of mobiles: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character

    // Array of Mobile structures
    struct Mobile mobiles[n];

    // Input details for each mobile
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for mobile %d:\n", i + 1);

        printf("Company Name: ");
        fgets(mobiles[i].company_name, sizeof(mobiles[i].company_name), stdin);
        mobiles[i].company_name[strcspn(mobiles[i].company_name, "\n")] = 0; // Remove trailing newline

        printf("Color: ");
        fgets(mobiles[i].color, sizeof(mobiles[i].color), stdin);
        mobiles[i].color[strcspn(mobiles[i].color, "\n")] = 0;

        printf("Model: ");
        fgets(mobiles[i].model, sizeof(mobiles[i].model), stdin);
        mobiles[i].model[strcspn(mobiles[i].model, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &mobiles[i].price);
        getchar(); // Consume the newline character
    }

    // Display the details of all mobiles
    printf("\nMobile Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nMobile %d:\n", i + 1);
        printf("Company Name: %s\n", mobiles[i].company_name);
        printf("Color: %s\n", mobiles[i].color);
        printf("Model: %s\n", mobiles[i].model);
        printf("Price: %.2f\n", mobiles[i].price);
    }

    return 0;
}