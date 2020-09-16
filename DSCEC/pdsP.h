//
// Created by Alan de Freitas on 05/04/2018.
//

#ifndef PDSP_H
#define PDSP_H

#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>

class PdsP {
public:
    PdsP(int nDimensions = 100);
    void disp() const;

    void setMinSeparationTime(auto minSeparationTime);

    auto getMinSeparationTime() const;

    void setDepartureWindow(std::vector<int> departureWindow);

    std::vector<int> getDepartureWindow() const;

    void setEarliestUnimpeded(std::vector<int> earliestUnimpeded);

    std::vector<int> getEarliestUnimpeded() const;

    void setQueues(int queues);

    int getQueues() const;

    void setFlights(int flights);

    int getFlights() const;

    /* Getters & Setters */


private:
    /* Problem parameters */
    int flights;
    int queues;
    std::vector<int> earliestUnimpeded;
    std::vector<int> departureWindow;
    int** minSeparationTime;




};


#endif
