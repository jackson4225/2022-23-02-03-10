//block letter project

#include <stdio.h>

void printLetterMed(char letter[5][4]) {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 4; j++) {
      printf("%c", letter[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void printLetterLarge(char letter[5][5]) {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      printf("%c", letter[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void printLetterSmall(char letter[5][3]) {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%c", letter[i][j]);
    }
    printf("\n");
  }
  printf("\n");
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
    {'B', 'B', 'B', ' '},
    {'B', ' ', ' ', 'B'},
    {'B', ' ', 'B', ' '},
    {'B', ' ', ' ', 'B'},
    {'B', 'B', 'B', ' '}
  };

  char c[5][4] = {
    {' ', 'C', 'C', 'C'},
    {'C', ' ', ' ', ' '},
    {'C', ' ', ' ', ' '},
    {'C', ' ', ' ', ' '},
    {' ', 'C', 'C', 'C'}
  };

  char d[5][4] = {
    {'D', 'D', 'D', ' '},
    {'D', ' ', ' ', 'D'},
    {'D', ' ', ' ', 'D'},
    {'D', ' ', ' ', 'D'},
    {'D', 'D', 'D', ' '}
  };

  char e[5][4] = {
    {'E', 'E', 'E', 'E'},
    {'E', ' ', ' ', ' '},
    {'E', 'E', 'E', ' '},
    {'E', ' ', ' ', ' '},
    {'E', 'E', 'E', 'E'}
  };

  char f[5][4] = {
    {'F', 'F', 'F', 'F'},
    {'F', ' ', ' ', ' '},
    {'F', 'F', 'F', ' '},
    {'F', ' ', ' ', ' '},
    {'F', ' ', ' ', ' '}
  };

  char g[5][4] = {
    {' ', 'G', 'G', 'G'},
    {'G', ' ', ' ', ' '},
    {'G', ' ', 'G', 'G'},
    {'G', ' ', ' ', 'G'},
    {' ', 'G', 'G', 'G'}
  };

  char h[5][4] = {
    {'H', ' ', ' ', 'H'},
    {'H', ' ', ' ', 'H'},
    {'H', 'H', 'H', 'H'},
    {'H', ' ', ' ', 'H'},
    {'H', ' ', ' ', 'H'}
  };

  char i[5][3] = {
   {'I', 'I', 'I'},
   {' ', 'I', ' '},
   {' ', 'I', ' '},
   {' ', 'I', ' '},
   {'I', 'I', 'I'}
  };

  char j[5][4] = {
   {'J', 'J', 'J', 'J'},
   {' ', ' ', 'J', ' '},
   {' ', ' ', 'J', ' '},
   {' ', ' ', 'J', ' '},
   {'J', 'J', ' ', ' '}
  };

  char k[5][4] = {
   {'K', ' ', ' ', 'K'},
   {'K', ' ', 'K', ' '},
   {'K', 'K', ' ', ' '},
   {'K', ' ', 'K', ' '},
   {'K', ' ', ' ', 'K'}
  };

  char l[5][4] = {
   {'L', ' ', ' ', ' '},
   {'L', ' ', ' ', ' '},
   {'L', ' ', ' ', ' '},
   {'L', ' ', ' ', ' '},
   {'L', 'L', 'L', 'L'}
  };

  char m[5][5] = {
   {'M', ' ', ' ', ' ', 'M'},
   {'M', 'M', ' ', 'M', 'M'},
   {'M', ' ', 'M', ' ', 'M'},
   {'M', ' ', ' ', ' ', 'M'},
   {'M', ' ', ' ', ' ', 'M'}
  };

  char n[5][4] = {
   {'N', ' ', ' ', 'N'},
   {'N', 'N', ' ', 'N'},
   {'N', ' ', 'N', 'N'},
   {'N', ' ', ' ', 'N'},
   {'N', ' ', ' ', 'N'}
  };

  char o[5][4] = {
   {' ', 'O', 'O', ' '},
   {'O', ' ', ' ', 'O'},
   {'O', ' ', ' ', 'O'},
   {'O', ' ', ' ', 'O'},
   {' ', 'O', 'O', ' '}
  };

  char p[5][4] = {
   {'P', 'P', 'P', ' '},
   {'P', ' ', ' ', 'P'},
   {'P', 'P', 'P', ' '},
   {'P', ' ', ' ', ' '},
   {'P', ' ', ' ', ' '}
  };

  char q[5][4] = {
   {' ', 'Q', 'Q', ' '},
   {'Q', ' ', ' ', 'Q'},
   {'Q', ' ', ' ', 'Q'},
   {'Q', ' ', 'Q', 'Q'},
   {' ', 'Q', 'Q', 'Q'}
  };

  char r[5][4] = {
   {'R', 'R', 'R', ' '},
   {'R', ' ', ' ', 'R'},
   {'R', 'R', 'R', ' '},
   {'R', ' ', 'R', ' '},
   {'R', ' ', ' ', 'R'}
  };

  char s[5][4] = {
   {' ', 'S', 'S', 'S'},
   {'S', ' ', ' ', ' '},
   {'S', 'S', 'S', 'S'},
   {' ', ' ', ' ', 'S'},
   {'S', 'S', 'S', ' '}
  };

  char t[5][3] = {
   {'T', 'T', 'T',},
   {' ', 'T', ' ',},
   {' ', 'T', ' ',},
   {' ', 'T', ' ',},
   {' ', 'T', ' ',}
  };

  char u[5][4] = {
   {'U', ' ', ' ', 'U'},
   {'U', ' ', ' ', 'U'},
   {'U', ' ', ' ', 'U'},
   {'U', ' ', ' ', 'U'},
   {'U', 'U', 'U', 'U'}
  };

  char v[5][4] = {
   {'V', ' ', ' ', 'V'},
   {'V', ' ', ' ', 'V'},
   {'V', ' ', ' ', 'V'},
   {'V', ' ', ' ', 'V'},
   {' ', 'V', 'V', ' '}
  };

  char w[5][5] = {
   {'W', ' ', ' ', ' ', 'W'},
   {'W', ' ', ' ', ' ', 'W'},
   {'W', ' ', 'W', ' ', 'W'},
   {'W', 'W', ' ', 'W', 'W'},
   {'W', ' ', ' ', ' ', 'W'}
  };

  char x[5][4] = {
   {'X', ' ', ' ', 'X'},
   {' ', 'X', 'X', ' '},
   {' ', 'X', 'X', ' '},
   {' ', 'X', 'X', ' '},
   {'X', ' ', ' ', 'X'}
  };

  char y[5][5] = {
   {'Y', ' ', ' ', ' ', 'Y'},
   {' ', 'Y', ' ', 'Y', ' '},
   {' ', ' ', 'Y', ' ', ' '},
   {' ', ' ', 'Y', ' ', ' '},
   {' ', ' ', 'Y', ' ', ' '}
  };

  char z[5][4] = {
   {'Z', 'Z', 'Z', 'Z'},
   {' ', ' ', 'Z', ' '},
   {' ', 'Z', ' ', ' '},
   {'Z', ' ', ' ', ' '},
   {'Z', 'Z', 'Z', 'Z'}
  };
  
  printLetterMed(a);
  printLetterMed(b);
  printLetterMed(c);
  printLetterMed(d);
  printLetterMed(e);
  printLetterMed(f);
  printLetterMed(g);
  printLetterMed(h);
  printLetterSmall(i);
  printLetterMed(j);
  printLetterMed(k);
  printLetterMed(l);
  printLetterLarge(m);
  printLetterMed(n);
  printLetterMed(o);
  printLetterMed(p);
  printLetterMed(q);
  printLetterMed(r);
  printLetterMed(s);
  printLetterSmall(t);
  printLetterMed(u);
  printLetterMed(v);
  printLetterLarge(w);
  printLetterMed(x);
  printLetterLarge(y);
  printLetterMed(z);
  
  
  return 0;
}