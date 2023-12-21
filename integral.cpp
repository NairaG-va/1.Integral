//Нахождение I_k
#include <iostream>
#include <math.h>

double function(double k, double alpha);

int main(int argc, char* argv[]){

if (argc < 3)
{
   std::cout << "No arguments" << "\n";
   return 1;
}

double k;
double alpha;

try
{
   k = std :: stod(argv[1]);
   alpha = std :: stod(argv[2]);
}
catch(...)
{
   std::cout << "Not able to parse arguments" << "\n";
   return 1;
}

std::cout << function(k, alpha);

return 0;
}


double function(double k, double alpha){
   return sin(k*alpha)/sin(alpha);
}
