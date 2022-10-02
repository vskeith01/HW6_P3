#include <iostream>

using namespace std;

int main() {


  return 0;
}



/*  Function to calculate Power with unputs distance and water flow*/


double PowerProduced(double H, double Q)
{
  double g = 9.81;    // m/s
  double p = 1;   // Water density
  double Power;   // Power Produced
  Power = p * Q * H * g;

  return Power;
  
}