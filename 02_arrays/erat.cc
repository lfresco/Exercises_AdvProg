#include <iostream>
#include <cmath>


int* one(int* array, int N);
int* erat(int* array, int N);

int main(){

  int N; //stores the maximum number decided by the user

  std::cin >> N; 

  int* primes = new int[N]; // creates an array with dimension N

  

  
  
  //
  erat(primes, N);


  //and we print the prime numbers obtained before
  for(int i = 0; i < N; i++){  
     
    if(primes[i]==1)
    std::cout << i << std::endl;

  }
  

  return 0;
}

int* one(int* array, int N){

  for(size_t k = 0; k < N; k++ ){

    array[k] = 1;

  } 

}

//this function is an implementation of the sieve of Herathostenes
int* erat(int* array, int N){

one(array, N); 

for(int i = 2; i < sqrt(N); i++ ){

    if(array[i] == 1){

      int j = i*i;

      while(j < N){

        array[j] = 0;
        j = j + i;
      }

    } 

  }
}


