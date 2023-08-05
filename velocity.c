 #include <stdio.h>

void main()
{
    float km , ms;                              //Variable declaration

    printf("Enter the velocity in km/hr :");
    scanf("%f",&km);                            // Input the velocity

    ms = km * 5/18 ;                            // Velocity conversion

    printf("The velocity in m/s is : %f",ms);   // Output
}
