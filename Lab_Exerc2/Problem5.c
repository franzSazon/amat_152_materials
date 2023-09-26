#include <stdio.h>
 
int main(){

    int a, b, c;
    double d, e, f;
    char g, h[10];

        // Ask for 3 integers and store them in a, b, c
        printf("Enter 3 integers: ");
        scanf("%d %d %d", &a, &b, &c);

        // Ask for 3 floats and store them in d, e, f
        printf("Enter 3 floats: ");
        scanf("%lf %lf %lf", &d, &e, &f);

        while (getchar() != '\n'); // Clear the buffer, pa explain kay franz lang

        // Ask a character and store it in g
        printf("Enter a character: ");
        scanf("%c", &g);

        // Ask a string of length 5 and store it in h
        printf("Enter a string of length 5: ");
        scanf("%5s", &h);

        printf("%d %d %d\n", a, b, c);
        printf("%lf %lf %lf\n", d, e, f);
        printf("%c\n", g);
        printf("%5s\n", h);

        // Question 5
        printf("Enter a string: ");
        scanf("%c%2s", &g, h);
        printf("%c\n", g);
        printf("%s\n", h);

    return 0;
}