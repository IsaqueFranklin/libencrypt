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
  tmp1=tmp2 = 0;

  for(p->i = 0; p->i < 256; p->i++){
    p->s[i] = i;
  } 

  for(p->i = 0; p->i < 256; p->i++){
    tmp1 = p->i % size;
    tmp2 = p->j + p->s[p->i] + key[tmp1];
    p->j = tmp2 % 256;
    tmp1 = p->s[p->i];
    tmp2 = p->s[p->j];
    p->s[p->i] = tmp2;
    p->s[p->j] = tmp1;
  }

  p->i=p->j = 0;
}
