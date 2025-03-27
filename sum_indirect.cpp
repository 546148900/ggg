#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>

#include "sums.h"

void 
setup(int64_t N, double A[])
{
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
      for(int64_t i = 0; i < N ; i++){

      A[i] =  lrand48() % N;

   }
}

double
sum(int64_t N, double A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);

   double sum = 0.0;

   int64_t index = A[0];

      for(int64_t i = 0; i < N ; i++){

      sum += A[index];

      index = A[index];

   }

   return sum;

}

