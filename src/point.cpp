#include"../header/point.h"

Point::Point(double inX, double inY, double inZ) : mX(inX), mY(inY), mZ(inZ){}
Point::~Point(){}

double Point::x(){
    return this->mX;
}

double Point::y(){
    return this->mY;
}

double Point::z(){
    return this->mZ;
}