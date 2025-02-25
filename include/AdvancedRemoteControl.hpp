#pragma once

#include "RemoteControl.hpp"

class AdvancedRemoteControl : public RemoteControl {
   public:
    explicit AdvancedRemoteControl(std::shared_ptr<Device> dev)
        : RemoteControl(std::move(dev)) {}

    void Mute() {
        std::cout << "command: mute" << std::endl;
        device->SetVolume(0);
    }
};