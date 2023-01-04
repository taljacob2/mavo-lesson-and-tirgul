#include <stdio.h>

typedef struct car Car;

struct car {
    char company[20];
    char model[20];
    int  year;
};

void scanCar(Car *car) {
    printf("company: ");
    scanf("%s", car->company);

    printf("model: ");
    scanf("%s", car->model);

    printf("year: ");
    scanf("%d", &car->year);
}

void printCar(Car *car) {
    printf("{ ");
    printf("company: %s, ", car->company);
    printf("model: %s, ", car->model);
    printf("year: %d", car->year);
    printf(" }\n");
}

int main() {
    Car carArray[30];

    // Scan cars from user.
    for (int i = 0; i < 30; i++) {
        printf("scan Car %d:\n", i);
        scanCar(&carArray[i]);
    }

    printf("\nprinting all Cars that their year is greater than 1995:\n");
    for (int i = 0; i < 30; i++) {
        if (carArray[i].year > 1995) { printCar(&carArray[i]); }
    }

    printf("\nprinting all Cars that their model name starts with the letter "
           "`B`:\n");
    for (int i = 0; i < 30; i++) {
        if (carArray[i].model[0] == 'B') { printCar(&carArray[i]); }
    }

    return 0;
}