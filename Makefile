output: main.o getStabbedLines.o readLines.o readPoints.o printLineByCoords.o
	g++ main.o getStabbedLines.o readLines.o readPoints.o printLineByCoords.o -o output

main.o: main.cpp
	g++ -c main.cpp

getStabbedLines.o: getStabbedLines.cpp stabbingLines.h
	g++ -c getStabbedLines.cpp

printLineByCoords.o: printLineByCoords.cpp stabbingLines.h
	g++ -c printLineByCoords.cpp

readLines.o: readLines.cpp stabbingLines.h
	g++ -c readLines.cpp

readPoints.o: readPoints.cpp stabbingLines.h
	g++ -c readPoints.cpp

clean:
	rm *.o output
