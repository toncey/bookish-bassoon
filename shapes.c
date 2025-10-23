/*=======================================================*
Lab Assignment 2L
Toncey Stevenson
* =======================================================*/
#include <stdio.h>
#define PI 3.1415


/*=======================================================*/
int main(void)
{
    float side = 0;
    float square_area;
	float circle_area;
	float cube_surface;
	float sphere_surface;
	float cylinder_lateral_surface;
	float cone_lateral_surface;
	float cube_volume;
	float sphere_volume;
	float cylinder_volume;
	float cone_volume;
	float radius = 0;
	float height = 0;
    
    /* Input the value of a side */
    printf("Enter value for Side> ");
    scanf("\n%f", &side);

	printf("Enter value for Radius> ");
	scanf("\n%f", &radius);

	printf("Enter value for Height> ");
	scanf("\n%f", &height);

	printf("You entered: Side = %4.2f ", side);
	printf("Radius = %4.2f ", radius);
	printf("Height = %4.2f\n\n", height);

	// Compute and print the area of a square
    square_area = side * side;
    printf("Area of Square: %6.2f\n", square_area);

	circle_area = PI * radius * radius;
	printf("Area of Circle: %6.2f\n", circle_area);

	cube_surface = 6 * side * side;
	printf("Area of Cube: %6.2f\n", cube_surface);

	sphere_surface = 4 * PI * radius * radius;
	printf("Area of Sphere: %6.2f\n", sphere_surface);

	cylinder_lateral_surface = 2 * PI * radius * height;
	printf("Area of Cylinder: %6.2f\n", cylinder_lateral_surface);

	cone_lateral_surface = PI * radius * side;
	printf("Area of Cone: %6.2f\n\n", cone_lateral_surface);

	cube_volume = side * side * side;
	printf("Volume of Cube: %6.3f\n", cube_volume);

	sphere_volume = (4.0 / 3.0) * PI * radius * radius * radius;
	printf("Volume of Sphere: %6.3f\n", sphere_volume);

	cylinder_volume = PI * radius * radius * height;
	printf("Volume of Cylinder: %6.3f\n", cylinder_volume);

	cone_volume = (1.0 / 3.0) * PI * radius * radius * height;
	printf("Volume of Cone: %6.3f\n", cone_volume);

    printf("Goodbye\n");
    return 0;
}

