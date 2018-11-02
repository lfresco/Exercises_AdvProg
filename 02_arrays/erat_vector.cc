#include <iostream>
#include <vector>
#include <cmath>

std::vector<bool> one(std::vector<int> vector, int N);
std::vector<bool> erat(std::vector<bool> vector, int N);

int main(){

  std::cout << "Insert the maximun number" << std::endl;

  int N;

  std::cin >> N;

  std::vector<bool> primes[N];

  erat(primes, N);

  for(int i = 0; i < N; i++){  
     
    if(primes[i]==true)
    std::cout << i << std::endl;

  }

  return 0;
}

std::vector<bool> one(std::vector<bool> vector, int N){

  for(size_t k = 0; k < N; k++ ){

    vector[k] = true;

  } 

}

std::vector<bool> erat(std::vector<bool> vector, int N){

for(int i = 2; i < sqrt(N); i++ ){

    if(vector[i] == true){

      int j = i*i;

      while(j < N){

        vector[j] = false;
        j = j + i;
      }

    } 

  }
}
