#ifndef __IF_RF24_H__
#define __IF_RF24_H__

#include "../ak/message.h"

#include <wiringPi.h>// phai build tren Pi ms chay dc cai nay`
#include <RF24/RF24.h>
#include <RF24Network/RF24Network.h>
#include <RF24Network/RF24Network_config.h>

#define RF24_BUFFER_SIZE		128

extern q_msg_t gw_task_if_rf24_mailbox;
extern void* gw_task_if_rf24_entry(void*);

#endif //__IF_RF24_H__


// code cua em co ham main() the hien toan bo qua trinh dieu khien,
//anh thay no bang 1 class roi goi den class tu ben ngoai, class do chinh la ak
