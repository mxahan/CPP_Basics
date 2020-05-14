#include "Person.h"

Person::Person(){
  name = "john";
}

string Person::toString(){
  return "Person name is: "+ name;
}

void Person::setName(string newName){
  name = newName;

}

string Person::getName(){
  return name;
}
