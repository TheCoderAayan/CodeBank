#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 100
#define NAME_LENGTH 50
typedef struct 
{
    char name[NAME_LENGTH];
    float price;
} Product;
void addProduct(Product*products,int* count)
 {
    if (*count>=MAX_PRODUCTS) 
	{
        printf("Product list is full");
        return;
}
    printf("Enter product name: ");
    scanf("%s",products[*count].name);
    printf("Enter product price:");
    scanf("%f",&products[*count].price);
    (*count)++;
    printf("Product added successfully!\n");
}
void displayProducts(Product* products, int count) 
{
	int i;
    if (count==0) 
	{
        printf("No products in the list.\n");
        return;
    }
    printf("\nProduct List:\n");
    for( i=0;i<count;i++) 
	{
        printf("Product Name: %s, Price: %f\n",products[i].name,products[i].price);
    }
}

void searchProduct(Product* products, int count) 
{
	int i;
    char searchName[NAME_LENGTH];
    printf("Enter the product name to search: ");
    scanf("%s",searchName);
    for( i=0;i<count;i++) 
	{
        if(strcmp(products[i].name,searchName)==0) 
		{
            printf("Product found: %s, Price: %.2f\n", products[i].name, products[i].price);
            return;
        }
    }
    printf("Product not found.\n");
}

// Main function
int main() {
    Product products[MAX_PRODUCTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nProduct List Management System\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct(products, &count);
                break;
            case 2:
                displayProducts(products, count);
                break;
            case 3:
                searchProduct(products, count);
                break;
            case 4:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

