#include <iostream>
#include <string>
#include <map>
#include <fstream>


int main(){

  std::ifstream inFile;

  std::map<std::string, int> words;

  inFile.open("LittleWomen.txt");

  std::string word;

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

  
  for(auto& t : words){
  
   std::cout << t.first << " " << t.second << std::endl;
  
  }




  return 0;
}
