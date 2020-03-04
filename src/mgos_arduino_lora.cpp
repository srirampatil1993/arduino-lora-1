#include "mgos_arduino_lora.h"

LoRaClass* mgos_LoRa_create()
{
	return new LoRaClass();
}
/*SPIClass* mgos_SPI_create(uint8_t spi_bus)
{
     return new SPIClass();
}
 mgos_SPI_begin(LORAClass* lora, uint8_t sck, uint8_t miso, uint8_t mosi,uint8_t nss)
{
  if (lora == nullptr)
        return;
  SPI->begin
}*/

int mgos_LoRa_begin(LoRaClass* lora,long int  frequency)
{
	if (lora == nullptr)
        return false;
    return lora->begin(frequency);
}
void mgos_LoRa_setpins(LoRaClass* lora,uint8_t NSS,uint8_t RESET, uint8_t DIO0)
{
	
	if (lora == nullptr)
        return;
    lora->setPins(NSS, RESET, DIO0);
}
int mgos_LoRa_beginpacket(LoRaClass* lora, int implicitHeader)
{
	if (lora == nullptr)
        return false;
    return lora->beginPacket(implicitHeader);
}
int mgos_LoRa_endpacket(LoRaClass* lora)
{
	
	if (lora == nullptr)
        return false;
    return lora->endPacket();
}
/*size_t mgos_LoRa_write(LoRaClass* lora, uint8_t byte)
{
	if (lora == nullptr)
        return false;
    return lora->write(byte);	
}*/
size_t mgos_LoRa_write(LoRaClass* lora, const uint8_t *buffer, size_t size)
{
	if (lora == nullptr)
        return false;
    return lora->write(buffer,size);
}
int mgos_LoRa_parsepacket(LoRaClass* lora, int size)
{
	if (lora == nullptr)
        return false;
    return lora->parsePacket(size);
}
int mgos_LoRa_available(LoRaClass* lora)
{
	if (lora == nullptr)
        return false;
    return lora->available();
}
int mgos_LoRa_read(LoRaClass* lora)
{
	if (lora == nullptr)
        return false;
    return lora->read();
}
bool mgos_receive_lora(LoRaClass* lora, char* rx_buf)
{
	if (lora == nullptr)
        return false;
    return lora->receive_lora_packet(rx_buf);
}
void mgos_send_lora(LoRaClass* lora, char* tx_buf)
{
	if (lora == nullptr)
        return;
    lora->send_lora_data(tx_buf);
}

/*void mgos_lora_end(LoRaClass* lora)
{
	if (lora == nullptr)
        return false;
    return LoRaClass->end();
}







int mgos_lora_rssi(LoRaClass* lora)
{
    if (lora == nullptr)
        return false;
    return LoRaClass->packetRssi();
}

float mgos_lora_packetsnr(LoRaClass* lora)
{
	if (lora == nullptr)
        return false;
    return LoRaClass->packetSnr();
}

long mgos_lora_packet_frequencyerror(LoRaClass* lora)
{
	if (lora == nullptr)
        return false;
    return LoRaClass->packetFrequencyError();
}





int mgos_lora_available(LoRaClass* lora)
{
	if (lora == nullptr)
        return false;
    return LoRaClass->available();
}

*/


		






















































	
