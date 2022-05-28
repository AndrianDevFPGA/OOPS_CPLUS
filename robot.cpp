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
private:
    // entity
    int X; // x cordinate 
    int Y; // y cordinate
    string Direction;
   // const string NORTH = "NORTH";
    //const string SOTH = "SOTH";
    //const string EAST = "EAST";
    //const string WEST = "WEST";
 public:   
    // method 
    
    void SetX (int x) {
        X = x;
    }
    int getX () {
        return X;
    }
    
    void setY (int y){
        Y = y;
    }
    int getY(){
        return Y;
    }
    
    void setDirection (string direction){
        Direction = direction;
    }
    string getDirection (){
        return Direction;
    }
    
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
    
    void turnRight () {
        X = X;
        Y = Y;
        if (Direction == "NORTH") {
            Direction = "EAST";
        }
        else if (Direction == "SOTH") {
            Direction = "WEST";
        }
        else if (Direction == "WEST") {
            Direction = "NORTH";
        }
        else {
            Direction = "SOTH";
        }
    }
    
    void GoBack (){
        if (Direction == "NORTH"){
            X = X;
            Y = Y - 1;
            Direction = "NORTH";
        }
        else if (Direction == "WEST") {
            X = X + 1 ;
            Y = Y;
            Direction = "WEST";
        }
        else if (Direction == "EAST") {
            X = X-1;
            Y = Y ;
            Direction = "EAST";
            
        }
        else {
            X = X;
            Y = Y + 1;
            Direction = "SOTH";
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
    robot1.SetX(8);
    robot1.myPosition();

    return 0;
}
