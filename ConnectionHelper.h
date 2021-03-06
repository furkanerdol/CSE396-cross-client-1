//
// Created by hmenn on 06.04.2017.
//

#ifndef CONNECTION_HELPER
#define CONNECTION_HELPER

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

class ConnectionHelper {

public:
    ConnectionHelper();
    ~ConnectionHelper();

    char *readSocket(int byte);
    int writeSocket(const char *msg);
    void releaseConnection();
    void startRemoteServer();
    void openArdConnection();
    void handShake();
    bool state=false;
    int getListenFD() const;
private:

    int listenfd;
    int clielen; // size of client address
    struct sockaddr_in serv_addr,cli_addr;
};


#endif //CSE396_RASP_ALI_RECOGNER_CONNECTIONHELPER_H
