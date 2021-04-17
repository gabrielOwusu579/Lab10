#include "stabbingLines.h"


void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, Point pointsArray[], const int MaxPtsSize, Line stabbedLines[], const int MaxStbSize, int& NumOfStbLines){
    int count = 0;
    for(int i = 0; i < NumLines; i++){
        Line l = linesArray[i];
        Point start_pnt = pointsArray[l.p1];
        Point end_pnt = pointsArray[l.p2];
        if(end_pnt.x > xcoord){
            if(start_pnt.x < xcoord){
                if(count < MaxStbSize){
                    stabbedLines[count] = l;
                    count++;
                }
            }
        }
    }
    NumOfStbLines = count;
}
