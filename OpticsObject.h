#pragma once
#include "std_lib_facilities.h"

struct Point
{
    int x; 
    int y; 
}; 

class Object
{
    Point coord; 
    Object(int x, int y) : coord{x, y} {};
};

class ThinLens : public Object
{
    private:
    double focalLength; 
    Point endOne; 
    Point endTwo; 
    
    public:

};

class ThickLens 
{
    private:
    double leftCurvature; 
    double rightCurvature; 
    double thickness; 
    
    public:

}; 

class ObjectSource 
{
    private:
    
    public:

}; 

class ObjectImage 
{
    private:

    
    public:
    
}; 