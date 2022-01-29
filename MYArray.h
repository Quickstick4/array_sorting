//Header file for the Class file of Array

//Header files are just for declarations

//Declare the class - this doesn't construct it
class GKArray
{


//Declaring Private data of the class
private:
	int ArraySize;


//Declaring Functions of the class. This allows the linker to put these declreations in any file with #include "other.h". That file can then call these functions as long as they are actually written in one of the .cpp files in the project. 
public:
	//This is what the constructor
    GKArray(int size);


    //AccessorFunction 
    int getSizeOfArray();
    void MyFunc();

    //Modifier function

};