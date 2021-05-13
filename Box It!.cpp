#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box {
    int l,b,h;
    public:
    Box() {
        l=0; b=0 ; h=0;
    }
    Box(int lenght , int breadth , int height) {
        l=lenght;
        b=breadth;
        h=height;
    }
    Box(const Box &Ba) {
        h = Ba.h;
        l = Ba.l;
        b = Ba.b;
    }
    int getLength() {
        return l;
    }
    int getBreadth() {
        return b;
    }
    int getHeight() {
        return h;
    }
    long long CalculateVolume() {
        long long volume = l;
        volume *= b;
        volume *= h;
        return volume;

    } 
    bool operator < (Box &B) {
        if(l<B.l)
        return true;
        else if(b<B.b && l==B.l)
        return true;
        else if(h<B.h && b==B.b && l==B.l)
        return true;
        else
        return false;
    }
    friend ostream& operator<< (ostream &output ,Box &B) {
        output<<B.l<<" "<<B.b<<" "<<B.h;
        return output;
    }
};

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

