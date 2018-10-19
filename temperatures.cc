#include<iostream>
#include <vector>
#include <algorithm>
#include <fstream>

template <typename T>
double mean(std::vector<T>);

template <typename T>
double median(std::vector<T>);

int main(){

  
  std::ifstream inFile;
  
  inFile.open("temperatures.txt");
  
  double value;
  double sum;
  std::vector<double> vector ; 
  
  while(inFile >> value){
  
    vector.push_back(value);
  
  }
  inFile.close();
  

  std::cout << "The mean is " << mean(vector) << std::endl;
  
  std::cout << "The median is " << median(vector) << std::endl;

  /* for(i = 0; i < vector.size(); i++){
  
   std::cout << vector[i] << std::endl;
  
  }*/


  return 0;
}


template <typename T>
double mean(std::vector<T> vector){

  double mean;
  double sum;

  for(int i= 0; i < vector.size() - 1; i++ ){

  sum += vector[i];
  

  }

  mean = sum / vector.size();	

  return mean;
}

template <typename T>
double median(std::vector<T> vector){

 double median;
 
 std::sort(vector.begin(), vector.end());
 
 if((vector.size()%2)==0){
 
    median = ((vector[((vector.size())/2) + 1]) + (vector[((vector.size())/2) + 1]) / 2);
 
 }else{
 
   median = vector[(vector.size()-1) /2];
 
 }


 return median;


}
