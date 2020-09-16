/**
 *  Plane Departure Schedule 
 *  Evolutionary Computation
 *  
 *  @author Paulo Felipe Possa Parreira - 12.2.1165
 */
#include "pdsP.h"

void PdsP::setMinSeparationTime(auto minSeparationTime) {
    this->minSeparationTime = minSeparationTime;
}

auto PdsP::getMinSeparationTime() const {
    return minSeparationTime;
}

void PdsP::setDepartureWindow(std::vector<int> departureWindow) {
    this->departureWindow = departureWindow;
}

std::vector<int> PdsP::getDepartureWindow() const {
    return departureWindow;
}

void PdsP::setEarliestUnimpeded(std::vector<int> earliestUnimpeded) {
    this->earliestUnimpeded = earliestUnimpeded;
}

std::vector<int> PdsP::getEarliestUnimpeded() const {
    return earliestUnimpeded;
}

void PdsP::setQueues(int queues) {
    this->queues = queues;
}

int PdsP::getQueues() const {
    return queues;
}

void PdsP::setFlights(int flights) {
    this->flights = flights;
}

int PdsP::getFlights() const {
    return flights;
}