#include <iostream>
#include <string>

// All features in one system: Navigation, Music, and Climate Control
class InfotainmentSystem {
public:
    // Method to start navigation to a destination
    void startNavigation(std::string destination) {
        std::cout << "Starting navigation to: " << destination << std::endl;
    }

    // Method to play a specific song
    void playMusic(std::string song) {
        std::cout << "Playing song: " << song << std::endl;
    }

    // Method to set the car's climate (temperature)
    void setTemperature(int temp) {
        std::cout << "Setting climate to " << temp << "°C" << std::endl;
    }

    // Method to run all features together in a sequence
    void runSystem() {
        startNavigation("City Center");
        playMusic("Pop Hits");
        setTemperature(22);
    }
};

int main() {
    InfotainmentSystem system;
    system.runSystem();  // All features are controlled by this one system
    return 0;
}
