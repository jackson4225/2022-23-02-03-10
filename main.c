//block letter project

#include <stdio.h>

void printLetter(char letter[5][4]) {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 4; j++) {
      printf("%c", letter[i][j]);
    }
    printf("\n");
  }
}

int main(void) {

  char a[5][4]  = {
    {' ', 'A', 'A', ' '},
    {'A', ' ', ' ', 'A'},
    {'A', 'A', 'A', 'A'},
    {'A', ' ', ' ', 'A'},
    {'A', ' ', ' ', 'A'}
  };

  char b[5][4] = {
    {'B', 'B', ' ', ' '},
    {'B', ' ', 'B', ' '},
    {'B', 'B', ' ', ' '},
    {'B', ' ', 'B', ' '},
    {'B', 'B', ' ', ' '}
  };

  char c[5][4] = {
    {' ', 'C', 'C', ' '},
    {'C', ' ', ' ', ' '},
    {'C', ' ', ' ', ' '},
    {'C', ' ', ' ', ' '},
    {' ', 'C', 'C', ' '}
  };

  printLetter(a);
  printLetter(b);
  printLetter(c);
  
  
  return 0;
}