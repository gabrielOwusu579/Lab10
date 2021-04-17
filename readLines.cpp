#include "stabbingLines.h"
#include <fstream>
using namespace std;

void readLines(ifstream& inPutLineFile, Line linesArray[], const int MaxLnsSize, int& numLines){
    string linesFile = "Lines.txt";
    inPutLineFile.open(linesFile);

    // Reading from the file.
    string lid, p1, p2;
    int count = 0;
    while (inPutLineFile >> lid >> p1 >> p2){
        Line l;
        l.Lid = stoi(lid);
        l.p1 = stoi(p1);
        l.p2 = stoi(p2);
        if(count < MaxLnsSize){
            linesArray[count] = l;
            count++;
        }
    }
    numLines = count;
}
