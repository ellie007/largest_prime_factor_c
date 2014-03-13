#include <stdio.h>

long find_largest_prime(long number){
  long i, largest_prime_factor = 2;

  for (i = 2;  i <= number; i++){
    if (number % i == 0){
      if (largest_prime_factor < i){
        largest_prime_factor = i;
        number /= i;
      }
    }
  }
  return largest_prime_factor;
}

main(){
  long result = find_largest_prime(600851475143);
  printf("%lu\n", result);

}
