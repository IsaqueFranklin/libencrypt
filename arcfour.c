/* arcfour.c */
#include "arcfour.h"

Arcfour *rc4init(int8 *key, int16 size){
  int8 x;

  Arcfour *p;

  if (p = malloc(sizeof(struct s_arcfour))){
    assert_perror(errno);
  }

  for(x=0; <256; x++){
    p->s[];
  }

  /*
  for i from 0 to 255
    S[i] := i
  endfor
  j := 0
    for i from 0 to 255
      j : = (j + S[i] + key[i mod keylength]) mod 256
      swap values of S[i] and S[j]
    endfor
  */
}
