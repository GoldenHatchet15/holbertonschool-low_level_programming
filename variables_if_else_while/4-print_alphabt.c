#include <stdio.h>
/**
 *
 * 
 *
 *
 *
 *
 */

int main(){

  char r;

  for(r = 'a'; r <= 'z'; ++r){
    if(r != 'q' && r != 'e'){
      putchar(r);
    }
  }
  putchar('\n');
  return 0;
}
