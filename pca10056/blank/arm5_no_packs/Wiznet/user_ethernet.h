#ifndef USER_ETHERNET_H__
#define USER_ETHERNET_H__

#include "bsp.h"


void 	wizchip_select	();
void 	wizchip_deselect();
uint8_t wizchip_read();
void 	wizchip_write	(uint8_t wb);


void user_ethernet_init	();
void network_init		();

#endif
