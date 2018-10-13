#include<iostream>






int main(){

  int MAX = 100; //maxium number of elements

  int* primes = new int[100]; //creates an array that contains 100 elements
  
  primes[0] = 2; // set the first element of the array equal to 2
  int contatore = 1; // keeps track of the numbers of prime numbers found

 /*the two innested for loops loop trhough all the numbers and exit as soon as it finds a number whose reminder is equal to zero */

  for(int i = 2; i < MAX; i++){

   for(int j = 2; j < i; j++){
     
     if(i%j == 0){
 
      break;

     } else if(i == j+1){
      

      
      primes[contatore] = i;
      contatore ++;

     }

   }
  
 }


  // this for loops prints the prime numbers found during the execution
  for(size_t k = 0; k < contatore; k++ ){

   std::cout << primes[k] << std::endl;
}


  return 0;
}





