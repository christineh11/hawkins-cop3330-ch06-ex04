#include "std_lib_facilities.h"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Christine Hawkins
 */

/*

Define a class Name_value that holds a string and a value. Rework exercise 19 in Chapter 4 to use a
vector<Name_value> instead of two vectors

19. Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22. For each pair, add
the name to a vector called names and the number to a vector called scores (in corresponding positions, so that if
names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0. Check that each name is unique and
terminate with an error message if a name is entered twice. Write out all the (name,score) pairs, one per line.

*/


 class Name_value
{
  public:
  string string;
  int value;
};


vector<Name_value> nvalue;

void print_values()
{
cout<<"Name and score pairs: \n";

//size one less to read in al values of vector
for (int j=0; j<nvalue.size()-1;j++)
{
cout<<nvalue[j].string<<"\t"<<nvalue[j].value<<"\n";
}
}

int main() {

//declare vector
Name_value t;
int i;
   
  cout << "input name followed by value (Terminate with 'Noname 0'): \n";

//while string is not "noname" and value is 0
while(t.string!="Noname" && t.value !=0){

  //read in values
  cin>>t.string>>t.value;
  
  //fills in vector
  for(i=0; i<nvalue.size();i++)
  {
    //if it equals the same name
     if (nvalue[i].string == t.string)
            {
                cout << "Error: name was entered twice \n";
                cin >> t.string>>t.value;
            }
  }

//pushes to vector
  nvalue.push_back(t);
    
  }
 
  print_values();

} 