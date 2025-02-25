#pragma once

#include "Device.hpp"

class Radio : public Device {
   private:
    int volume = 5;

   public:
    void TurnOn() override { std::cout << "Radio on" << std::endl; }

    void TurnOff() override { std::cout << "Radio off" << std::endl; }

    void SetVolume(int volume) override {
        this->volume = volume;
        std::cout << "Radio volume: " << volume << std::endl;
    }

    int GetVolume() override { return volume; }
};