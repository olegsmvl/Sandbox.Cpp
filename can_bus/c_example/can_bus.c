#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <linux/can.h>
#include <linux/can/raw.h>

int main() {
    int s; // Socket descriptor
    struct sockaddr_can addr;
    struct ifreq ifr;
    struct can_frame frame;

    // Create a socket
    s = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if (s < 0) {
        perror("Socket");
        return 1;
    }

    // Specify the CAN interface
    strcpy(ifr.ifr_name, "vcan0");
    ioctl(s, SIOCGIFINDEX, &ifr);

    // Bind the socket to the CAN interface
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    if (bind(s, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        perror("Bind");
        return 1;
    }

    // Prepare the CAN frame
    frame.can_id = 0x123; // CAN ID
    frame.can_dlc = 8; // Data length code (number of data bytes)
    frame.data[0] = 0x01; // Data bytes
    frame.data[1] = 0x02;
    frame.data[2] = 0x03;
    frame.data[3] = 0x04;
    frame.data[4] = 0x05;
    frame.data[5] = 0x06;
    frame.data[6] = 0x07;
    frame.data[7] = 0x08;

    // Send the CAN frame
    if (write(s, &frame, sizeof(struct can_frame)) != sizeof(struct can_frame)) {
        perror("Write");
        return 1;
    }

    printf("CAN message sent successfully\n");

    // Close the socket
    close(s);

    return 0;
}
