#include "AdvancedRemoteControl.hpp"
#include "Radio.hpp"
#include "RemoteControl.hpp"
#include "TV.hpp"

int main() {
    // TV와 라디오 객체 생성
    std::shared_ptr<Device> tv = std::make_shared<TV>();
    std::shared_ptr<Device> radio = std::make_shared<Radio>();

    // 일반 리모컨으로 TV 조작
    RemoteControl basicRemote(tv);
    basicRemote.TurnOn();
    basicRemote.VolumeUp();
    basicRemote.TurnOff();

    std::cout << "-----------------------" << std::endl;

    // 고급 리모컨으로 라디오 조작
    AdvancedRemoteControl advancedRemote(radio);
    advancedRemote.TurnOn();
    advancedRemote.Mute();
    advancedRemote.TurnOff();

    return 0;
}