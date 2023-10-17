#include <stdio.h>
/**
 * main - Entry point
 * 
 * This program prints the alphabet n lowercase, 
 * followed by a new line using putchar twice
 *
 * Return: 0 if successful
 */

int main(void){

  char r;

  for(r = 'a'; r <= 'z'; ++r){
    if(r != 'q' && r != 'e'){
      putchar(r);
    }
  }
  putchar('\n');
  return (0);
}
