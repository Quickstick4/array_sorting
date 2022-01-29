//MYArray class
//Written By GK just to learn, nothing fancy. Purley tinkering

//This is not following any book or youtube video. Just tinkering and seeing what works.

#include <iostream>
#include "MYArray.h"


//ClassConstructor - Construct the object when called
GKArray::GKArray(int size)
 {
    ArraySize = size;
    std::cout << "Object Made with array size: " << ArraySize << '\n';
 }


//Code for the accssor functions listed in header file//
//N.B. for this methods to be accessable from the object, they must have "GKArray::function name";
int GKArray::getSizeOfArray()
{
  return ArraySize;

}


void GKArray::MyFunc() {
    std::cout << "Ohai from another .cpp file!" << '\n';
//    std::cout << "The number is really " << holder;

    //Just used to causes a pause in the programn as Linux doesn't have pause like Windows
    std::cin.get();
}