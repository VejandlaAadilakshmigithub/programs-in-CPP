#include <iostream>
#include <vector>

class Observer {
public:
    virtual void update() = 0;
};

class Subject {
private:
    std::vector<Observer*> observers;

public:
    void attach(Observer* observer) {
        observers.push_back(observer);
    }

    void notify() {
        for (auto observer : observers) {
            observer->update();
        }
    }
};

class Button : public Subject {
public:
    void click() {
        std::cout << "Button clicked!" << std::endl;
        notify();
    }
};

class Logger : public Observer {
public:
    void update() override {
        std::cout << "Logger: Button was clicked!" << std::endl;
    }
};

int main() {
    Button button;
    Logger logger;

    button.attach(&logger);
    button.click();
    return 0;
}
