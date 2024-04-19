#include "TV.h"
TV(float l, float w) : l(length), w(width){}

float TV::CalculateArea()
{
   float area = 0;
   area = length * width;
   std::cout << "TV's area is: " << area << std::endl;
  return area ;
}
