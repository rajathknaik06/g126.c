/*Write a program that allows Teju to input and manage population data for three cities. The program should allow users to input the names and populations of three cities. 



Next, it calculates the total population of three cities and computes the average population using pointer arithmetic.

Input format :
For each of the three cities, the input consists of the following space-separate values:

The name of the city (a string)
The population of the city (an integer)
Output format :
The first line displays an integer representing the total population of the three cities.

The second line displays a double value representing the average population of the three cities, rounded to two decimal places.*/

#include <stdio.h>

int main() {
    char name1[50], name2[50], name3[50];
    int population1, population2, population3;

    scanf("%s %d", name1, &population1);
    scanf("%s %d", name2, &population2);
    scanf("%s %d", name3, &population3);

    char *ptr_name1 = name1;
    char *ptr_name2 = name2;
    char *ptr_name3 = name3;

    int *ptr_population1 = &population1;
    int *ptr_population2 = &population2;
    int *ptr_population3 = &population3;

    int totalPopulation = *ptr_population1 + *ptr_population2 + *ptr_population3;
    double averagePopulation = (double)totalPopulation / 3.0;

    printf("%d\n", totalPopulation);
    printf("%.2lf\n", averagePopulation);

    return 0;
}
