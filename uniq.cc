#include <iostream>

int main(){
  
  unsigned int cont{1};

  std::string line;
  std::string prev_line{" "};
  
  std::getline(std::cin,prev_line) ; 

  while(std::getline(std::cin,line)){
 
   if(line == prev_line){

    cont ++;
    

   } else {
    
    
    std::cout << "        "<< <<cont <<" " <<prev_line << std::endl;    
    cont = 1;
   }
 
  prev_line = line;
  }


  return 0;

}
