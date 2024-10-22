/* example.c */

#include "arcfour.h"

int main(void);

int main() {
  Arcfour *rc4;
  int16 skey, stext;
  char *key, *from, *encrypted, *decrypted;

  key = "tomatoes"; /* 8 bits -> 2048 bits */
  skey = strlen(key);
  from = "Shall I compare thee to a summer's day?";
  stext = strlen(from);
}
