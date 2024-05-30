#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <sys/socket.h>
#include <linux/can.h>
#include <linux/can/raw.h>

int main() {
    int s;
    struct sockaddr_can addr;
    struct ifreq ifr;
    struct can_frame frame;

    // Create a socket
    if ((s = socket(PF_CAN, SOCK_RAW, CAN_RAW)) < 0) {
        perror("Socket");
        return 1;
    }

    // Specify the interface name
    strcpy(ifr.ifr_name, "vcan0");
    ioctl(s, SIOCGIFINDEX, &ifr);

    // Bind the socket to the CAN interface
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    if (bind(s, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        perror("Bind");
        return 1;
    }

    printf("listening...\n");

    // Receive CAN messages
    while (1) {

        int nbytes = read(s, &frame, sizeof(struct can_frame));

        if (nbytes < 0) {
            perror("Read");
            printf("err\n");
            return 1;
        }


        if (nbytes < sizeof(struct can_frame)) {
            fprintf(stderr, "Incomplete CAN frame\n");
             printf("Incomplete\n");
            return 1;
        }

  

        printf("Received CAN frame with ID: %X DLC: %d Data: ",
               frame.can_id, frame.can_dlc);

        for (int i = 0; i < frame.can_dlc; i++) {
            printf("%02X ", frame.data[i]);
        }
        printf("\n");
    }

    // Close the socket
    close(s);

    return 0;
}
