#ifndef PISTON_A_H
#define PISTON_A_H

#include "pros/adi.hpp" 

class Piston {
private:
    bool piston_state;
    pros::adi::DigitalOut p_out; 

public:

    Piston(bool initial_state, int port) : piston_state(initial_state), p_out(port) {}

    void open() {
        piston_state = true;
        p_out.set_value(true); //ADI output -> high
    }

    void close() {
        piston_state = false;
        p_out.set_value(false); // ADI output -> low
    }

    // toggle 
    void flip() {
        if (piston_state) {
            close();
        } else {
            open();
        }
    }

    bool getState() const {
        return piston_state;
    }
};

#endif
