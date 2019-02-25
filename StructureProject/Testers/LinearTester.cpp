//
//  LinearTester.cpp
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    //MARK: Time STL
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "---[Crime Data]---" << endl;
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    musicSTL.startTimer();
    vector<CrimeData> tunez = FileController :: readCrimeDataToVector("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<CrimeData> musicList = FileController :: readDataToList("/Users/sfit1864/Documents/C++ Projects/StructureProject/StructureProject/Resources/crime.csv");
    musicOOP.stopTimer();
    
    cout << "---[Music]---" <<endl;
    cout << "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    //MARK: Random Retrieval STL
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "---[Crime Data]---"<<endl;
    cout << "This is the STL random retrieval: "<< endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
   randomIndex = rand() % musicList.getSize();
    
    musicSTL.startTimer();
    tunez[randomIndex];
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "---[Music]---"<<endl;
    cout << "This is the STL random retrieval: "<< endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    cout << endl;
    
}

void LinearTester :: testVsStack()
{
    
}

void LinearTester :: testVsQueue()
{
    
}

void LinearTester :: testVsDouble()
{
    
}