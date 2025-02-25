#pragma once

#include <iostream>

class Device {
   public:
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual void SetVolume(int volume) = 0;
    virtual int GetVolume() = 0;
    virtual ~Device() = default;
};