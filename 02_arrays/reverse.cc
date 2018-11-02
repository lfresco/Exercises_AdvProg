#include <iostream>

template <typename T>
T* alloc_arr(int n);
template <typename T>
void print_reverse(T *array, int n);




int main(){

 std::cout << "Insert array dimension"<< std::endl;

 int length;

 std::cin >> length;

 int* a = alloc_arr<int>(length);

 std::cout <<"In reverse order" <<std::endl; 

 for(size_t k = 0; k<= length; k++){
 std::cout<< a[length - k] << std::endl;
}
  return 0;
}


template<typename T>
T* alloc_arr(int n){

  T* array{new T[n]};

  std::cout << "Insert elements"<< std::endl;

  

  for(size_t k = 0; k < n; k++){

   std::cin >> array[k];

  }

  return array;
}


template <typename T>
void print_reverse(T* array, int n){

 for(size_t k = n;(k==0); k--){
 
   std::cout << array[k] << std::endl; 
 }


}









