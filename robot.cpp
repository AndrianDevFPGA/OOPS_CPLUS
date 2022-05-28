/*
  Name : Rakotojaona Nambinina
  email : Andrianoelisoa.Rakotojaona@gmail.com
  Desciption : Object oriented Programming for simple Robot
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Robot {
public:
    // entity
    int X; // x cordinate 
    int Y; // y cordinate
    string Direction;
   // const string NORTH = "NORTH";
    //const string SOTH = "SOTH";
    //const string EAST = "EAST";
    //const string WEST = "WEST";
    
    // method 
    void myPosition (){
        cout << "x = " << X << endl;
        cout << "y = " << Y <<endl;
        cout << "Direction = " << Direction << endl;
    }
    
    void turnLeft () {
        X = X;
        Y = Y;
        if (Direction == "NORTH") {
            Direction = "WEST";
        }
        else if (Direction == "SOTH") {
            Direction = "EAST";
        }
        else if (Direction == "WEST") {
            Direction = "SOTH";
        }
        else {
            Direction = "NORTH";
        }
    }
    
    void Go (){
        if (Direction == "NORTH"){
            X = X;
            Y = Y + 1;
            Direction = "NORTH";
        }
        else if (Direction == "WEST") {
            X = X - 1 ;
            Y = Y;
            Direction = "WEST";
        }
        else if (Direction == "EAST") {
            X = X+1;
            Y = Y ;
            Direction = "EAST";
            
        }
        else {
            X = X;
            Y = Y - 1;
            Direction = "SOTH";
        }
    }
    
    // constractor 
    Robot (int x , int y , string direction) {
        X = x;
        Y = y;
        Direction = direction;
    }
    
};

int main()
{
    //cout<<"Hello World";
    // instantiation of Robot
    Robot robot1 = Robot (0,0,"SOTH");
    robot1.Go ();
    robot1.myPosition();
    robot1.turnLeft();
    robot1.myPosition();
    robot1.Go();
    robot1.myPosition();


    return 0;
}
