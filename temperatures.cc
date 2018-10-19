#include<iostream>
#include <vector>
#include <algorithm>
#include <fstream>

template <typename T>
double mean(std::vector<T>);

template <typename T>
double median(std::vector<T>);

int main(){

  
  std::ifstream inFile;  //creates an ifstream to read from the .txt file 
  
  inFile.open("temperatures.txt"); //reads file
  
  double value; //variable that will store the value read from file
  
  std::vector<double> vector ; // vector that will contain all the values 
  
  /*the following loop allows us to store all the values that we read from the file inside the vector*/
  
  while(inFile >> value){   
  
    vector.push_back(value);
  
  }
  inFile.close();
  

  std::cout << "The mean is " << mean(vector) << std::endl;
  
  std::cout << "The median is " << median(vector) << std::endl;

 

  return 0;
}

/*MEAN FUNCTION */
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

/*MEDIAN FUNCTION*/
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
