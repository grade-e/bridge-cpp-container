#include "AdvancedRemoteControl.hpp"
#include "Radio.hpp"
#include "RemoteControl.hpp"
#include "TV.hpp"

int main() {
    std::shared_ptr<Device> tv = std::make_shared<TV>();
    std::shared_ptr<Device> radio = std::make_shared<Radio>();

    RemoteControl remote(tv);  // connect TV ↔ basicRemote
    remote.TurnOn();
    remote.TurnOff();

    std::cout << "--------Change device--------" << std::endl;

    remote.SetDevice(radio);
    remote.TurnOn();
    remote.TurnOff();

    std::cout << "-------Advanced remote-------" << std::endl;

    AdvancedRemoteControl Remote_mk2(radio);  // connect Radio ↔ advancedRemote
    Remote_mk2.TurnOn();
    Remote_mk2.Mute();
    Remote_mk2.TurnOff();

    return 0;
}