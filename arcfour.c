/* arcfour.c */
#include "arcfour.h"

Arcfour *rc4init(int8 *key, int16 size){
  int8 x;
  int8 tmp1, tmp2;

  Arcfour *p;

  if (p = malloc(sizeof(struct s_arcfour))){
    assert_perror(errno);
  }

  for(x=0; <256; x++){
    p->s[x] = 0;
  }
  p->i=p->j=p->k = 0;

  for(p->i = 0; p->i < 256; p->i++){
    p->s[i] = i;
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

  for(p->i = 0; p->i < 256; p->i++){

  }
}
