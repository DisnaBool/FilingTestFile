#include <iostream>

enum class State { OFF, COOL, HEAT, FAN_ONLY };
enum class Event { POWER, MODE };

class AirConditioner {
private:
    State current;

public:
    AirConditioner() : current(State::OFF) {}

    void handle(Event event) {
        switch (current) {
        case State::OFF:
            if (event == Event::POWER) {
                current = State::FAN_ONLY;
                std::cout << "Power ON - Fan only mode\n";
            }
            break;

        case State::FAN_ONLY:
            if (event == Event::POWER) {
                current = State::OFF;
                std::cout << "Power OFF\n";
            }
            else if (event == Event::MODE) {
                current = State::COOL;
                std::cout << "Mode: COOLING (18 C)\n";
            }
            break;

        case State::COOL:
            if (event == Event::POWER) {
                current = State::OFF;
                std::cout << "Power OFF\n";
            }
            else if (event == Event::MODE) {
                current = State::HEAT;
                std::cout << "Mode: HEATING (25 C)\n";
            }
            break;

        case State::HEAT:
            if (event == Event::POWER) {
                current = State::OFF;
                std::cout << "Power OFF\n";
            }
            else if (event == Event::MODE) {
                current = State::FAN_ONLY;
                std::cout << "Mode: FAN only\n";
            }
            break;
        }
    }
};

int main() {
    AirConditioner ac;

    ac.handle(Event::POWER);  // ON → FAN_ONLY
    ac.handle(Event::MODE);   // → COOL
    ac.handle(Event::MODE);   // → HEAT
    ac.handle(Event::MODE);   // → FAN_ONLY
    ac.handle(Event::POWER);  // OFF

    return 0;
}