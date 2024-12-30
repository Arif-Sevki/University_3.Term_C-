#ifndef TV_H
#define TV_H

#include "Device.h"

class TV : public Device {
private:
    int channel;
    int volume; // 0-100

public:
    TV(const std::string& name, double consumption, int channel, int volume, NotificationSystem* notifier);

    void setChannel(int newChannel);
    void setVolume(int newVolume);

    void showDetails() const override;
};

#endif // TV_H
