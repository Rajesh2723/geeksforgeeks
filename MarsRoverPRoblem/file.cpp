#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Rover{

int x;
int y;
char orientation ;

public :

Rover();
Rover( int , int , char );
void rotateLeft();
void rotateRight();
void movePosition();
void displayPosition();

};    

Rover :: Rover()
{
x =0;
y =0;
orientation = 'N';

}

Rover :: Rover ( int positionX , int positionY , char Orientation )
{
x= positionX;
y= positionY;

orientation = Orientation ;
}

void Rover::  displayPosition()
{
cout<<x<<" "<<y<<" "<<orientation;
}

void Rover :: rotateLeft()
{
 if(orientation=='N')
 orientation= 'W'; 
 else if(orientation=='W')
 orientation='S';
 else if(orientation=='S')
 orientation='E';
 else if(orientation=='E')
 orientation='N';

}

void Rover :: rotateRight()
{
 if(orientation=='N')
 orientation= 'E'; 
 else if(orientation=='W')
 orientation='N';
 else if(orientation=='S')
 orientation='W';
 else if(orientation=='E')
 orientation='S';

}

void Rover ::movePosition()
{
 if(orientation=='N')
    y++;
 else if(orientation=='W')
    x--;
 else if(orientation=='S')
    y--;
 else if(orientation=='E')
    x++;
}


int main()
{

int x,y; char orient ;
cin>>x>>y>>orient;
Rover firstRover(x,y,orient);

firstRover.displayPosition();

string roverMovement;
cin>>roverMovement;

for(int i=0 ; i < roverMovement.size() ; i++  )
{

     if(roverMovement[i]=='L')
     firstRover.rotateLeft();

     else if(roverMovement[i]=='R')
     firstRover.rotateRight();

     else
     firstRover.movePosition();
}

firstRover.displayPosition();

return 0;
}
