/* example.c */

#include "arcfour.h"

#define F fflush(stdout); 

int main(void);

int main() {
  Arcfour *rc4;
  int16 skey, stext;
  char *key, *from, *encrypted, *decrypted;

  key = "tomatoes"; /* 8 bits -> 2048 bits */
  skey = strlen(key);
  from = "Shall I compare thee to a summer's day?";
  stext = strlen(from);

  printf("Initializing encryption...");
  rc4 = rc4init(key, skey);
  

}
