#ifndef CONFIG_H
#define CONFIG_H

#include <stddef.h>
#include <signal.h>

extern const char *queue_name;
extern const char *channel_name;
extern const char *conninfo;

#define HMAC_KEY_SIZE 32

extern unsigned char hmac_key[HMAC_KEY_SIZE];
extern size_t hmac_keylen;

#endif // CONFIG_H