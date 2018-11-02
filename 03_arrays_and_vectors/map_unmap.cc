#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <unordered_map>
#include <ctime>
#include <cstdio>

int main(){

  
  
  std::ifstream inFile; //Variable used to store the text
  
  clock_t time_a = clock(); //Variable needed to measure the time elapsed
  

  /*SECTION OF THE PROGRAM THAT USES std::map*/
  
  
  std::map<std::string, int> words; //Map object that will use the words as keys and the
                                    //value will serve as a counter

  inFile.open("LittleWomen.txt"); 

  std::string word; //variable used to store the words read by the ifstream object

  //In this while loop the program reads a word and if it has already  been inserted inside
  //the map object it updates the value relative to that key.

  while(inFile >> word){
  
   if(words.size()== 0){

      words[word] = 1;
    }
   
   if(words.count(word) > 0){
   
   	words[word] += 1;
   
   } else {
   
   	words[word] = 1;
   
   }
  }
  
   inFile.close(); //instruction used to tell the compiler that it doesn't have to read
                   // no more. 
  
   clock_t time_b = clock(); //Variable that stores the time elapsed until the end of the
                             //closure of the ifstream file
   
   unsigned int time_ticks_map = (unsigned int )(time_b - time_a); //the actual elapsed time.
  
  /*SECTION OF THE PROGRAM THAT USES std::unsigned_map*/

  clock_t time_c = clock();

  std::unordered_map<std::string, int> uwords;
  
  inFile.open("LittleWomen.txt");
  
  //This while loop works exactly in the same way as the one used in the previous section

  while(inFile >> word){
  
   if(uwords.size()== 0){

      uwords[word] = 1;
    }
   
   if(uwords.count(word) > 0){
   
   	uwords[word] += 1;
   
   } else {
   
   	uwords[word] = 1;
   
   }
   
   
  
  }
  
   inFile.close();

  clock_t time_d = clock();

    unsigned int time_ticks_umap = (unsigned int )(time_d - time_c);


  std::cout << "Time ticks with map usage "<< time_ticks_map << std::endl;
  
  std::cout << "Time ticks with unordered map usage "<< time_ticks_umap << std::endl;

  return 0;
}
