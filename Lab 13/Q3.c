// NAME HAMZA RIAZ KHAN 	ROLL NO CR-031
#include <stdio.h>
#include <stdlib.h>

struct tool {
    int id;
    char name[50];
    int quantity;
    float cost;
};

int i;

void initFile() {
    FILE *fptr;
    fptr = fopen("d:\\tools.txt", "w");
    struct tool empty = {0, "", 0, 0.0};
    for (i = 0; i < 10; i++) {
        fwrite(&empty, sizeof(struct tool), 1, fptr);
    }
    fclose(fptr);
}

void inpData(int id) {
    FILE *fptr;
    fptr = fopen("d:\\tools.txt", "r+");
    struct tool newTool;
    newTool.id = id;
    printf("Enter tool name: ");
    scanf(" %[^\n]s", newTool.name);
    printf("Enter tool quantity: ");
    scanf("%d", &newTool.quantity);
    printf("Enter tool cost: ");
    scanf("%f", &newTool.cost);
    fseek(fptr, (id - 1) * sizeof(struct tool), SEEK_SET);
    fwrite(&newTool, sizeof(struct tool), 1, fptr);
    fclose(fptr);
}

void listTool() {
    FILE *fptr;
    fptr = fopen("d:\\tools.txt", "r");
    struct tool currentTool;
    for (i = 0; i < 10; i++) {
        fread(&currentTool, sizeof(struct tool), 1, fptr);
        if (currentTool.id != 0) {
            printf("Tool ID: %d\n", currentTool.id);
            printf("Tool name: %s\n", currentTool.name);
            printf("Tool quantity: %d\n", currentTool.quantity);
            printf("Tool cost: %.2f\n", currentTool.cost);
        }
    }
    fclose(fptr);
}

void delTool(int id) {
    FILE *fptr;
    fptr = fopen("d:\\tools.txt", "r+");
    struct tool empty = {0, "", 0, 0.0};
    fseek(fptr, (id - 1) * sizeof(struct tool), SEEK_SET);
    fwrite(&empty, sizeof(struct tool), 1, fptr);
    fclose(fptr);
}

void updateData(int id) {
    FILE *fptr;
    fptr = fopen("d:\\tools.txt", "r+");
    struct tool updatedTool;
    fseek(fptr, (id - 1) * sizeof(struct tool), SEEK_SET);
    fread(&updatedTool, sizeof(struct tool), 1, fptr);
    printf("Enter updated tool name: ");
    scanf("%s", updatedTool.name);
    printf("Enter updated tool quantity: ");
    scanf("%d", &updatedTool.quantity);
    printf("Enter updated tool cost: ");
scanf("%f", &updatedTool.cost);
fseek(fptr, (id - 1) * sizeof(struct tool), SEEK_SET);
fwrite(&updatedTool, sizeof(struct tool), 1, fptr);
fclose(fptr);
}

int main() {
int choice, id;
initFile();
while (1) {
	printf("\n-----------CHOSE-----------\n\n");
printf("1. Input tool data\n");
printf("2. List all tools\n");
printf("3. Delete a tool\n");
printf("4. Update a tool\n");
printf("5. Exit\n");

printf("\n--------------------------\n\n");
printf("Enter choice : ");
scanf("%d", &choice);
printf("\n---------YOU CHOSE---------\n");
switch (choice) {
case 1:
printf("\nEnter tool ID(1-10) : ");
scanf("%d", &id);
inpData(id);
break;
case 2:
listTool();
break;
case 3:
printf("Enter tool ID (1-10): ");
scanf("%d", &id);
delTool(id);
break;
case 4:
printf("Enter tool ID (1-10): ");
scanf("%d", &id);
updateData(id);
break;
case 5:
exit(0);
default:
printf("Invalid choice\n");
}
}
return 0;
}

