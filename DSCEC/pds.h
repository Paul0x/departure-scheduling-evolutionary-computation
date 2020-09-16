/**
 *  Plane Departure Schedule 
 *  Evolutionary Computation
 *  
 *  @author Paulo Felipe Possa Parreira - 12.2.1165
 */

using namespace std;
#ifndef PDS_H
#define PDS_H

#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
#include "pdsP.h"

class Pds {
public:
    Pds(PdsP &p);
    void disp(PdsP &p);
    double evaluate(PdsP &p);   
    void mutation(PdsP &p, double mutation_strength);
    Pds crossover(PdsP &p, Pds &rhs);
    
    /** Getters & Setters **/
//    vector<int> getFlightPosition() const;
//    std::map<std::vector<int>, bool> getFlightQueue() const;
//    std::map<int, int> getDepartureTime() const;    
//    void setFlightQueue(std::map<std::vector<int>, bool> flightQueue);
//    void setFlightPosition(vector<int> flightPosition);
//    void setDepartureTime(std::map<int, int> dt);
    int getNextPosition(int flights);
    
private:      
    /* Solution variables */
    vector<int> flightPosition;
    map<std::vector<int>, bool> flightQueue;
    map<int, int> departureTime;
    static std::default_random_engine _generator;
};

#endif
