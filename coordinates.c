/*---------------------------------------------------------------------------------------------------------------------/
// Toncey Stevenson
// Program 1P
/---------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(void) {
    //Input section
    float x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    printf("Please enter the coordinates of Point 1 (meters)> Please enter the coordinates of Point 2 (meters)>");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf("Points are: (x1,y1)=(%6.2f,%6.2f), (x2,y2)=(%6.2f,%6.2f)\n", x1, y1, x2, y2);

    //Distance calculation
    double distance = 0;
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    //Bearing angle calculation
    float bearing_angle = 0;
    float diff_x = x2 - x1;
    float diff_y = y2 - y1;
    bearing_angle = atan2(diff_x, diff_y);

    //Sweep angle calculation
    float bearing_angle_origin1;
    float bearing_angle_origin2;
    float sweep_angle;
    bearing_angle_origin1 = atan2(x1, y1);
    bearing_angle_origin2 = atan2(x2, y2);
    sweep_angle = bearing_angle_origin2 - bearing_angle_origin1;

    //Radians to degrees conversion
    float sweep_angle_degrees = 0;
    float bearing_angle_degrees = 0;
    sweep_angle_degrees = (180 / PI) * sweep_angle;
    bearing_angle_degrees = (180 / PI) * bearing_angle;

    //Meters to feet conversion
    double distance_feet = 0;
    distance_feet = distance * 3.280839895;





    //Output table 1
    printf("+-----------------------------------------------------------------------------+\n");
    printf("|        Distance (meters)|  Bearing Angle (radians)|    Sweep Angle (radians)|\n");
    printf("+-----------------------------------------------------------------------------+\n");
    printf("                     %5.0f|                   %6.3f|                   %6.3f|\n", distance, bearing_angle, sweep_angle);
    printf("+-----------------------------------------------------------------------------+\n");
    //Output table 2
    printf("+-----------------------------------------------------------------------------+\n");
    printf("|        Distance (meters)|  Bearing Angle (degrees)|    Sweep Angle (degrees)|\n");
    printf("+-----------------------------------------------------------------------------+\n");
    printf("                %10.5f|                 %8.3f|                   %6.2f|\n", distance, bearing_angle_degrees, sweep_angle_degrees);
    printf("+-----------------------------------------------------------------------------+\n");
    //Output table 3
    printf("+-----------------------------------------------------------------------------+\n");
    printf("|          Distance (feet)|  Bearing Angle (degrees)|    Sweep Angle (degrees)|\n");
    printf("+-----------------------------------------------------------------------------+\n");
    printf("                 %9.2f|                     %4.0f|                    %5.1f|\n", distance_feet, bearing_angle_degrees, sweep_angle_degrees);
    printf("+-----------------------------------------------------------------------------+\n");


    return 0;
}