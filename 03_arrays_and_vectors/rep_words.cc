
#include <iostream>
#include <vector>
#include <string>

int main(){

  std::vector<std::string> words; //this vector will contain the un-reapeted words
  
  std::string word;

  while(std::cin >> word){

    if(words.size()== 0){

      words.push_back(word);
    }
    
    for(int i = 0; i < words.size(); i++){
    
    
    	if(word == words[i]){
    	
    	  break;
    	
    	} else if (i == (words.size() -1)){
    	
    	  words.push_back(word);
    	
    	}
    
    
    }

   }
  


  for(int i = 0; i < words.size(); i++){
  
  	std::cout << words[i] << std::endl;
  
  }


  return 0;
}
