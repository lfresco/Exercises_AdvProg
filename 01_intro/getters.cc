#include <iostream>


void getdouble(){

 double value;


  while(!(std::cin >> value)){

    std::cin.clear();
    std::cin.ignore();

  }

  std::cout << "The double is " << value << std::endl;

}


void getint(){

 int value;


  while(!(std::cin >> value)){

    std::cin.clear();
    std::cin.ignore();

  }

  std::cout << "The integer is " << value << std::endl;

}




int main(){
  
  
  getint();


    

  return 0;
}
