#ifndef COLLECT_DATA_H_
#define COLLECT_DATA_H_

using namespace std;

#include <iostream>
#include <string>
#include <map>
#include <vector>

class CollectData{
    public:

    void SetDroneTotalDis(string name, float sum);//Count the total distance

    void SetDroneAverageSpeed(string name);//Counts the average speed 

    void SetCarryTotalDis(string name, float sum); //Count the total distance travled while carrying a robot

    void SetRobotAverageSpeed(string name);//Counts the average speed while carrying a robot.

    void PrintCollected();//prints the data collected

    void SendToCsv(); // sends data collected to csv file 
    
    void GetStart();//Get the start of a collection of data 
    
    void InitCollectData(string name);//Initialize a collection of data

    void IncrementTrips(string name);//increment the amount of trips 
    
    private:

    CollectData();
    map<string, map<string, float>> DataToCollect;
    vector<float> distance;
    static CollectData* start;

};

#endif