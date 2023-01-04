//Program to convert distance between two cities in various units.(Exercise6)
#include <stdio.h>
#include <conio.h>
int main()
    {
      double distance_km,distance_m,distance_f,distance_i,distance_cm;
      scanf("%lf",&distance_km);
      distance_m= distance_km*1000;
      distance_f= 3280.84*distance_km;
      distance_i= distance_km*39370.079;
      distance_cm= distance_km*100000;
      printf("%lf is the distance between them in meters \n",distance_m);
      printf("%lf is the distance between them in feet \n",distance_f);
      printf("%lf is the distance between them in inches \n",distance_i);
      printf("%lf is the distnace between them in centimeters \n",distance_cm);
      return 0;
    }