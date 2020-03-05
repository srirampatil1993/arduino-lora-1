#ifndef _MGOS_ARDUINO_LORA1276_H_
#define _MGOS_ARDUINO_LORA1276_H_
#endif
#include"LoRaClass.h"
#ifdef __cplusplus
extern "C"
{
#endif

LoRaClass* mgos_LoRa_create();

int mgos_LoRa_begin(LoRaClass* lora,long int  frequency);
void mgos_LoRa_setpins(LoRaClass* lora, uint8_t NSS,uint8_t RESET, uint8_t DIO0);
int mgos_LoRa_beginpacket(LoRaClass* lora, int implicitHeader);
int mgos_LoRa_endpacket(LoRaClass* lora);
size_t mgos_LoRa_write(LoRaClass* lora, const uint8_t *buffer, size_t size);
int mgos_LoRa_parsepacket(LoRaClass* lora, int size);
int mgos_LoRa_available(LoRaClass* lora);
int mgos_LoRa_read(LoRaClass* lora);
bool mgos_receive_lora(LoRaClass* lora, char* rx_buf);
void mgos_send_lora(LoRaClass* lora, char* tx_buf);
void mgos_lora_end(LoRaClass* lora);
int mgos_lora_rssi(LoRaClass* lora);

#ifdef __cplusplus
}
#endif /* __cplusplus */
