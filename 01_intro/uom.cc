#include <iostream>

int main(){

   double units;
 
   std::string uom;
 
   std::cout << "Write a number followed by meters or inches" << std::endl;
  
   std::cin >> units >> uom;


   if(uom == "meters"){
   
   double inches = units / 0.0254; 
   
   std::cout << inches << " inches" << std::endl;
  
   } else if(uom == "inches" ) {
 
     double meters = units * 0.0254;
      
     std::cout << meters << "meters" << std::endl;

   } 




  return 0;
} 
