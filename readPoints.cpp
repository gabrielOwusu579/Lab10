#include "stabbingLines.h"


void readPoints(ifstream& inPutPointFile, Point pointsArray[], const int MaxPntsSize, int& numPoints){
    string pointsFile = "Points.txt";
    inPutPointFile.open(pointsFile);

    // Reading from the file.
    string pid, x, y;
    int count = 0;
    while (inPutPointFile >> pid >> x >> y){
        Point p;
        p.Pid = stoi(pid);
        p.x = stoi(x);
        p.y = stoi(y);
        if(count < MaxPntsSize){
            pointsArray[count] = p;
            count++;
        }
    }
    numPoints = count;
}

