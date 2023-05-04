#ifndef NAT_H
#define NAT_H
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/ether.h>
#include <pcap.h>
#include <vector>
#include "strategieRTG.h"
#include <cstdint>
#include <string>



// Classe pour gérer la table de routage statique
class nat : public strategieRTG {
public:

    nat();
    
     std::string route(packet pac,inter_conf* r,inter_conf* t);
    
   
};

#endif  // STATIC_ROUTING_H

