#include <iostream>
#include <string>

// Separate services for each feature
class NavigationService {
public:
    void setDestination(std::string destination) {
        std::cout << "Setting destination to: " << destination << std::endl;
    }
};

class MusicService {
public:
    void playSong(std::string song) {
        std::cout << "Playing song: " << song << std::endl;
    }
};

class ClimateService {
public:
    void setTemperature(int temp) {
        std::cout << "Setting temperature to: " << temp << "°C" << std::endl;
    }
};

class InfotainmentSystem {
private:
    NavigationService navService;
    MusicService musicService;
    ClimateService climateService;

public:
    void startNavigation(std::string destination) {
        navService.setDestination(destination);
    }

    void playMusic(std::string song) {
        musicService.playSong(song);
    }

    void setTemperature(int temp) {
        climateService.setTemperature(temp);
    }

    void runSystem() {
        startNavigation("City Center");
        playMusic("Pop Hits");
        setTemperature(22);
    }
};

int main() {
    InfotainmentSystem system;
    system.runSystem();  // Each service is independent
    return 0;
}
