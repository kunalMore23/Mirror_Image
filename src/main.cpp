#include"../header/reflection.h"

int main()
{
    // readStl("flowerpot.stl");
    std::vector<Point> one = readFile();
    std::vector<Point> second = getPlane(one);
    writePlane(second);
    std::vector<Point> third = reflectPoint(second);
    plot(third);
    return 0;
}
