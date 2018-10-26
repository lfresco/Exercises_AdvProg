#include <iostream>


// Creates a scoper enum to represent the months
enum class Month{
 	jan = 1, feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
 }; 
 
 
// Functions that allows us to convert an integer into a month
Month itom(int i);

//Implementations of the concept of a date
class Date{
	int day, year; 
	Month month;
	
	public: 
	Date(int, Month, int);  //constructor
	
	// the following functions allow us to get the day, the month and the year
	
	const int get_day(){return day;} 
	const Month get_month(){return month;}
	const int get_year(){return year;}
	
	// Functions that allow us to add days to our date. 
	
	void add_days(const unsigned int n);
	void add_day(){Date::day += 1;}
};

//Implementations of the contructor

Date::Date(int d, Month m, int y){
	
	day = d;
	month = m;
	year = y;

}

bool operator==(Date lhs, Date rhs ){

 if( lhs.get_day() == rhs.get_day() &&
     static_cast<int>(lhs.get_month())==static_cast<int>(rhs.get_month())&&
     lhs.get_year() == rhs.get_year()){
    
    return true;
    
    } else {false; }


}

bool operator!=(Date lhs, Date rhs ){

if(!(lhs == rhs)){
	return true;
} else {return false;}

}
//Overload  operator << for type Month
std::ostream& operator<<(std::ostream& os, Month m) {
	
	os << static_cast<int>(m);
	return os;
}



// Overload operator << for type Date
std::ostream& operator<<(std::ostream& os, Date d) {
	
	os << d.get_day()<<"/"<<d.get_month()<<"/"<<d.get_year() <<std::endl;
	return os;
}



int main(){

 std::cout << "Insert the number of the day, of the month and of the year " << std::endl;

 int dd,mm,yy;
 
 
 std::cin >> dd >> mm >> yy;
 
 Date data = Date(dd,itom(mm),yy);
 
 std::cout << "The day is " << data.get_day() << std::endl;
 
 std::cout << "The month is " << data.get_month() << std::endl;
 
 std::cout << "The year is " << data.get_year() << std::endl;
 
 unsigned  int elapse;
 
 std::cout << "insert the number of days you want to elapse" << std::endl;
 
 std::cin >> elapse;
 
 data.add_days(elapse);
 
 
 std::cout << data << std::endl;
 
 Date data1 = Date(5,itom(3),1995);
 Date data2 = Date(5,itom(3),1996);
 Date data3 = Date(5,itom(3),1995);
 
 bool test1 = (data1 == data2);
 bool test2 = (data1 == data3);
 
 std::cout << "test 1 = " << test1 <<std::endl;
 std::cout << "test 2 = " << test2 <<std::endl;
 
 return 0;
 
 
 
}






// Implementations of the functions that converts int into Month
Month itom(int i){

	if(i > int(Month::jan) && i < (int(Month::dec)+1)){
	
		return Month(i);
	
	} 

}


void Date::add_days(const unsigned int n){

  
  int counter = 0; //keeps track of the number of the days added
  
  while(counter < n){
  
  	add_day(); //adds a day
  	
  	
  	
  	int mese = static_cast<int>(Date::month); // this int will help us modify the month
  	
  	switch(month){
  	
  	case Month::jan: case Month::mar: case Month::may: 
  	case Month::jul: case Month::aug: case Month::oct:
  	if(Date::day >31){
  	
  		Date::day = Date::day - 31; 
  		Date::month = itom(mese + 1);
  	
  	}
  	break;
  	  	
  	case Month::feb:
  	if(Date::day >28){
  	
  		Date::day = Date::day - 28;
  		Date::month = itom(mese + 1);
  	
  	}
  	break;
  	  	
  	
  	  	
  	case Month::apr: case Month::jun: case Month::sep: case Month::nov:
  	if(Date::day >30){
  	
  		Date::day = Date::day - 30;
  		Date::month = itom(mese + 1);
  	
  	}
  	break;
  	
  	
  	  	
  	case Month::dec:
  	if(Date::day >31){
  	
  		Date::day = Date::day - 31;
  		Date::month = Month::jan;
  		Date::year = Date::year + 1;
  	}
  	break;
  	  	
  	
  	}
  
  counter += 1;
  }
 }





 

























