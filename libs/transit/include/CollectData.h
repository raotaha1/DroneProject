#ifndef COLLECT_DATA_H_
#define COLLECT_DATA_H_

using namespace std;

#include <iostream>
#include <string>

class CollectData{
    public:

    void SetDroneTotalDis(string name, float sum);//Count the total distance

    void SetDroneAverageSpeed(string name);//Counts the average speed 

    void SetCarryTotalDis(string name, float sum); //Count the total distance travled while carrying a robot

    void SetRobotAverageSpeed(string name);//Counts the average speed while carrying a robot.

    void PrintCollected();//prints the data collected

    void SendToCsv(); // sends data collected to csv file 
    
    private:

    CollectData();

    static CollectData* start;


};

#endif