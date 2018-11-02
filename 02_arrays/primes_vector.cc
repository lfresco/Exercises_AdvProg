#include <iostream>
#include <vector>

int main(){

    std::vector<int> primes{0,1,2};

    for(int i = 2; i < 100; i++ ){

      for(int j = 2; j < i; j ++){

        if(i%j == 0){

           break;      

        } else if(i == j +1){

 
          primes.push_back(i);

        }


      }



    }

    for(size_t k = 0; k < primes.size(); k++ ){

      std::cout << primes[k] << std::endl;
   
   }






    return 0;
}
