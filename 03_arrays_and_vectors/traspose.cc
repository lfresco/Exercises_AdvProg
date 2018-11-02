#include <iostream>
#include <array>
template <typename T, std::size_t S>
std::array<T,S> traspose(std::array<T, S> &matrix, int nrow, int ncol);

template <typename T, std::size_t S>
void print_matr(std::array<T, S> &matrix, int nrow, int ncol);

#define C 4

#define R 3


int main(){


   int nrow = R;
   int ncol = C;

  
  
  const int N  = C * (R);

  std::array<double, N> matrix;
  
  
  
  
  for(int i = 0; i < N; i++){
   
   matrix[i] = i + 1;
   
  }
  
 
  
  std::cout << std::endl;
  
  print_matr(matrix, nrow,ncol);
  

 

  std::array<double,N> trasposed = traspose(matrix,nrow, ncol);
  
  
  
  print_matr(trasposed,nrow,ncol);

  

  return 0;
}

template <typename T, std::size_t S>
std::array<T,S> traspose(std::array<T, S> &matrix, int nrow, int ncol){


  std::array<T,S> traspose;

  for(int i = 0; i < nrow ; i++ ){

	for(int j = 0; j < ncol  ; j++ ){
	
		
		traspose[j*nrow + i] = matrix[i*ncol + j];
		
	
	
	}

  

  }

   return traspose;

}

template <typename T, std::size_t S>
void print_matr(std::array<T, S> &matrix, int nrow, int ncol){

   for(auto i = 0; i < nrow; i++ ){
  
  		
 	for(auto j = 0; j < ncol; j ++){ 	
    
    
   	std::cout << matrix[i*ncol +j] << " ";	
   	
   	
  	}
  	
  	std::cout << std::endl;
  	
   }
 

}










