#include "stabbingLines.h"
using namespace std;

void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
    // function to output the information about the line

    Point start_pnt = pointsArray[l.p1];
    Point end_pnt = pointsArray[l.p2];
    std::cout << "Line:" << lid << " (" << start_pnt.x << ", " << start_pnt.y << ")" << "   (" << end_pnt.x << ", " << end_pnt.y << ")" << std::endl;
}
