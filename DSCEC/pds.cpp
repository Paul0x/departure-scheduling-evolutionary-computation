/**
 *  Plane Departure Schedule 
 *  Evolutionary Computation
 *  
 *  @author Paulo Felipe Possa Parreira - 12.2.1165
 */
#include <map>

#include "pds.h"

std::default_random_engine Pds::_generator = std::default_random_engine(std::chrono::system_clock::now().time_since_epoch().count());

/**
 * Gera uma solução baseada no problema dado
 * @param p
 * @return 
 */
Pds::Pds(PdsP &p) {

    // Stop condition -> position array size is filled with all planes
    if (this->flightPosition.size() == p.getFlights()) {
        return;
    }

    // Get the next available position
    int next_position = 0;
    if (this->flightPosition.size() != 0) {
        next_position = this->getNextPosition(p.getFlights());
    }

    // Set the plane in next position
    this->flightPosition.push_back(next_position);
    //    
    //    // Set flight departure time
    //    this->setFlightDepartureTime();
    //    
    //    // Set flight in queue
    //    this->setFlightQueue();

}

int Pds::getNextPosition(int flights) {
    bool found = false;
    int random;
    while (!found) {
        std::uniform_int_distribution<int> d(0, flights);
        random = d(this->_generator);
        found = true;
        for (int i = 0; i < this->flightPosition.size(); i++) {
            if (random == this->flightPosition[i]) {
                found = false;
            }
        }
    }
    return random;
}

/**
 * Avalia a solução baseada no problema dado
 * @param p
 * @return 
 */

double Pds::evaluate(PdsP &p) {



}

/**
 * Realiza uma mutação nas variáveis da solução
 * @param p
 * @param mutation_strength
 */
void Pds::mutation(PdsP &p, double mutation_strength) {
}

/**
 * Realiza o cruzamento entre o pai 1 e o pai 2
 * @param p
 * @param rhs
 * @return 
 */
Pds Pds::crossover(PdsP &p, Pds &rhs) {
}
//
//
//void Pds::Pds::setDepartureTime(std::map<int, int> departureTime) {
//    this->departureTime = departureTime;
//}
//
//std::map<int, int> Pds::getDepartureTime() const {
//    return departureTime;
//}
//
//void Pds::Pds::setFlightQueue(std::map<std::vector<int>, bool> flightQueue) {
//    this->flightQueue = flightQueue;
//}
//
//std::map<std::vector<int>, bool> Pds::getFlightQueue() const {
//    return flightQueue;
//}
//
//void Pds::setFlightPosition(vector<int> flightPosition) {
//    this->flightPosition = flightPosition;
//}
//
//vector<int> Pds::getFlightPosition() const {
//    return flightPosition;
//}
