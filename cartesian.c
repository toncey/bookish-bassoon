/*=====================================================================================================================/
 Toncey Stevenson
 Lab 7L
/=====================================================================================================================*/

#include <stdio.h>
#include <math.h>

/* Function proto-type declarations */
void where_is_xy(double x, double y);
double compute_distance(double x1, double y1, double x2, double y2);

/* Function definitions */
void where_is_xy(double x, double y) {
    if (x == 0 && y == 0)
        printf(" ( %0.6f, %0.6f) - Origin\n", x, y);
    if (x == 0 && y != 0)
        printf(" ( %0.6f, %0.6f) - Y-Axis\n", x, y);
    if (x != 0 && y == 0)
        printf(" ( %0.6f, %0.6f) - X-Axis\n", x, y);
    if (x > 0 && y > 0)
        printf(" ( %0.6f, %0.6f) - Quadrant 1\n", x, y);
    if (x < 0 && y > 0)
        printf(" ( %0.6f, %0.6f) - Quadrant 2\n", x, y);
    if (x < 0 && y < 0)
        printf(" ( %0.6f, %0.6f) - Quadrant 3\n", x, y);
    if (x > 0 && y < 0)
        printf(" ( %0.6f, %0.6f) - Quadrant 4\n", x, y);

}

double compute_distance(double x1, double y1, double x2, double y2) {
    double D = 0;
    double dx = x2 - x1;
    double dy = y2 - y1;
    return D = sqrt((dx * dx) + (dy * dy));
}

int main(void) {
    double previous_x, previous_y;
    double current_x, current_y;
    int iterations = 0;
    double max_D = -1.0;
    double max_x2, max_y2, max_x1, max_y1;


    printf("\nEnter (x, y):");
    scanf("%lf %lf", &previous_x, &previous_y);
    where_is_xy(previous_x, previous_y);

    for (iterations = 0; iterations < 9; iterations++) {
        printf("\n\nEnter (x, y):");
        scanf("\n%lf %lf", &current_x, &current_y);
        where_is_xy(current_x, current_y);

        double D = compute_distance(previous_x, previous_y, current_x, current_y);
        printf("Distance between ( %0.2f, %0.2f) & (%0.2f, %0.2f): %0.2f", previous_x, previous_y, current_x, current_y, D);

        if (D > max_D) {
            max_D = D;
            max_x2 = current_x;
            max_y2 = current_y;
            max_x1 = previous_x;
            max_y1 = previous_y;

        }
        previous_x = current_x;
        previous_y = current_y;

    }
    printf("\n\nMax distance is  %0.2f between ( %0.2f, %0.2f) & ( %0.2f, %0.2f)", max_D, max_x1, max_y1, max_x2, max_y2);
 return 0;
}
