#pragma once

#include "Device.hpp"

class TV : public Device {
   private:
    int volume = 10;

   public:
    void TurnOn() override { std::cout << "TV on" << std::endl; }

    void TurnOff() override { std::cout << "TV off" << std::endl; }

    void SetVolume(int volume) override {
        this->volume = volume;
        std::cout << "TV volume: " << volume << std::endl;
    }

    int GetVolume() override { return volume; }
};