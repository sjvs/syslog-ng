#ifndef QUEUE_UTILS_LIB_H
#define QUEUE_UTILS_LIB_H 1

#include "logqueue.h"
#include "logpipe.h"

extern int acked_messages;
extern int fed_messages;

void test_ack(LogMessage *msg, AckType ack_type);
void feed_some_messages(LogQueue *q, int n, gboolean ack_needed, MsgFormatOptions *po);

void send_some_messages(LogQueue *q, gint n, gboolean use_app_acks);

void app_rewind_some_messages(LogQueue *q, gint n);

void app_ack_some_messages(LogQueue *q, gint n);

void rewind_messages(LogQueue *q);

#endif