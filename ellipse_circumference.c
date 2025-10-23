/* ------------------------------
 * Toncey Stevenson
 * Program 0P
 * Uses multiple formulas to calculate the circumference of an ellipse
 -------------------------------*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {
    float a = 0;
    float b = 0;
    float result1 = 0;
    float result2 = 0;
    float result3 = 0;
    float result4 = 0;
    float result5 = 0;
    float result6 = 0;
    //input prompt and scanf
    printf("Enter Major Axis:Enter Minor Axis"": ");
    scanf("%f%f", &a, &b);

    // formulas
    result1 = PI * ((3 * (a + b)) - sqrt(((3 * a) + b) * (a + (3 * b))));
    float h = powf(a - b, 2) / pow(a + b, 2);
    result2 = PI * (a + b) * (1 + (3 * h) / (10 + pow(4 - (3 * h), 0.5)));
    float s = 1.5;
    result3 = 2.0f * PI * powf(((powf(a,s) / 2.0f) + (powf(b, s) / 2.0f)), 1.0f / s);
    result4 = 0.25 * PI * (a + b) * (3 * (1 + h / 4) + 1 / (1 - h / 4));
    float x = logf(2) / logf(PI / 2);
    result5 = 4 * powf(powf(a, x) + powf(b, x), 1 / x);
    float z = 0.825056;
    result6 = 4 * (a + b) - ((2 * (4 - PI) * a * b) / powf(((powf(a,z) / 2) + (powf(b,z) / 2)), 1 / z ));

    // first output set
    printf("1)%.6f\n", result1);
    printf("2)%.6f\n", result2);
    printf("3)%.6f\n", result3);
    printf("4)%.6f\n", result4);
    printf("5)%.6f\n", result5);
    printf("6)%.6f\n\n", result6);

    // output table
    printf("Ellipse Circumference for Major Axis:  %4.2f ", a);
    printf("and Minor Axis: %4.2f \n", b);

    printf("+-----------------------------------------------------+\n");
    printf("|     Ramanujan's First Approximation |     %.6f|\n", result1);
    printf("+-----------------------------------------------------+\n");
    printf("|    Ramanujan's Second Approximation |     %.6f|\n", result2);
    printf("+-----------------------------------------------------+\n");
    printf("|                      Muir's Formula |     %.6f|\n", result3);
    printf("+-----------------------------------------------------+\n");
    printf("|                      Hudson Formula |     %.6f|\n", result4);
    printf("+-----------------------------------------------------+\n");
    printf("|                         Holder mean |     %.6f|\n", result5);
    printf("+-----------------------------------------------------+\n");
    printf("|            David Cantrell's formula |     %.6f|\n", result6);
    printf("+-----------------------------------------------------+\n");


    return 0;
}