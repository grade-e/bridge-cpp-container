#pragma once

#include <memory>

#include "Device.hpp"

class RemoteControl {
   protected:
    std::shared_ptr<Device> device;  // 장치와 연결 (Bridge 역할)
   public:
    explicit RemoteControl(std::shared_ptr<Device> dev)
        : device(std::move(dev)) {}

    void SetDevice(std::shared_ptr<Device> newDevice) {
        device = std::move(newDevice);  // 새로운 장치로 변경
    }

    virtual void TurnOn() { device->TurnOn(); }

    virtual void TurnOff() { device->TurnOff(); }

    virtual void VolumeUp() {
        int vol = device->GetVolume();
        device->SetVolume(vol + 1);
    }

    virtual void VolumeDown() {
        int vol = device->GetVolume();
        device->SetVolume(vol - 1);
    }
};