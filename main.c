//block letter project
/* inizialize a struct multidimensional array
    struct MedLetter a {
      'a',
        {},
        {},
        {},
        {},
        {}
    };
*/
#include <stdio.h>

typedef struct MedLetter {
  char letter;
  char block[5][4];
} BlockMed;

typedef struct LargeLetter {
  char letter;
  char block[5][5];
} BlockLarge;

typedef struct SmallLetter {
  char letter;
  char block[5][3];
} BlockSmall;

BlockMed a = {
    'a',
    {
      {' ', 'A', 'A', ' '},
      {'A', ' ', ' ', 'A'},
      {'A', 'A', 'A', 'A'},
      {'A', ' ', ' ', 'A'},
      {'A', ' ', ' ', 'A'}
    }    
  };
BlockMed b = {
    'b',
    {
    {'B', 'B', 'B', ' '},
    {'B', ' ', ' ', 'B'},
    {'B', ' ', 'B', ' '},
    {'B', ' ', ' ', 'B'},
    {'B', 'B', 'B', ' '}
  }
    
  };
BlockMed c = {
    'c',
    {
      {' ', 'C', 'C', ' '},
      {'C', ' ', ' ', 'C'},
      {'C', ' ', ' ', ' '},
      {'C', ' ', ' ', 'C'},
      {' ', 'C', 'C', ' '}
    }
    
  };
BlockMed d = {
    'd',
    {
      {'D', 'D', 'D', ' '},
      {'D', ' ', ' ', 'D'},
      {'D', ' ', ' ', 'D'},
      {'D', ' ', ' ', 'D'},
      {'D', 'D', 'D', ' '}
    }
    
  };
BlockMed e = {
    'e',
    {
      {'E', 'E', 'E', 'E'},
      {'E', ' ', ' ', ' '},
      {'E', 'E', 'E', ' '},
      {'E', ' ', ' ', ' '},
      {'E', 'E', 'E', 'E'}
    }
    
  };
BlockMed f = {
    'f',
    {
      {'F', 'F', 'F', 'F'},
      {'F', ' ', ' ', ' '},
      {'F', 'F', 'F', ' '},
      {'F', ' ', ' ', ' '},
      {'F', ' ', ' ', ' '}
    }
    
  };
BlockMed g = {
    'g',
    {
      {' ', 'G', 'G', 'G'},
      {'G', ' ', ' ', ' '},
      {'G', ' ', 'G', 'G'},
      {'G', ' ', ' ', 'G'},
      {' ', 'G', 'G', 'G'}
    }
    
  };
BlockMed h = {
    'h',
    {
      {'H', ' ', ' ', 'H'},
      {'H', ' ', ' ', 'H'},
      {'H', 'H', 'H', 'H'},
      {'H', ' ', ' ', 'H'},
      {'H', ' ', ' ', 'H'}
    }
    
  };
BlockSmall i = {
    'i',
    {
      {'I', 'I', 'I'},
      {' ', 'I', ' '},
      {' ', 'I', ' '},
      {' ', 'I', ' '},
      {'I', 'I', 'I'}
    }
  };
BlockMed j = {
    'j',
    {
      {'J', 'J', 'J', 'J'},
      {' ', ' ', 'J', ' '},
      {' ', ' ', 'J', ' '},
      {' ', ' ', 'J', ' '},
      {'J', 'J', ' ', ' '}
    }
  };
BlockMed k = {
    'k',
    {
      {'K', ' ', ' ', 'K'},
      {'K', ' ', 'K', ' '},
      {'K', 'K', ' ', ' '},
      {'K', ' ', 'K', ' '},
      {'K', ' ', ' ', 'K'}
    }
  };
BlockMed l = {
    'l',
    {
      {'L', ' ', ' ', ' '},
      {'L', ' ', ' ', ' '},
      {'L', ' ', ' ', ' '},
      {'L', ' ', ' ', ' '},
      {'L', 'L', 'L', 'L'}
    }
  };
BlockLarge m = {
    'm',
    {
      {'M', ' ', ' ', ' ', 'M'},
      {'M', 'M', ' ', 'M', 'M'},
      {'M', ' ', 'M', ' ', 'M'},
      {'M', ' ', ' ', ' ', 'M'},
      {'M', ' ', ' ', ' ', 'M'}
    }
  };
BlockMed n = {
    'n',
    {
      {'N', ' ', ' ', 'N'},
      {'N', 'N', ' ', 'N'},
      {'N', ' ', 'N', 'N'},
      {'N', ' ', ' ', 'N'},
      {'N', ' ', ' ', 'N'}
    }
  };
BlockMed o = {
    'o',
    {
      {' ', 'O', 'O', ' '},
      {'O', ' ', ' ', 'O'},
      {'O', ' ', ' ', 'O'},
      {'O', ' ', ' ', 'O'},
      {' ', 'O', 'O', ' '}
    }
  };
BlockMed p = {
    'p',
    {
      {'P', 'P', 'P', ' '},
      {'P', ' ', ' ', 'P'},
      {'P', 'P', 'P', ' '},
      {'P', ' ', ' ', ' '},
      {'P', ' ', ' ', ' '}
    }
  };
BlockMed q = {
    'q',
    {
      {' ', 'Q', 'Q', ' '},
      {'Q', ' ', ' ', 'Q'},
      {'Q', ' ', ' ', 'Q'},
      {'Q', ' ', 'Q', 'Q'},
      {' ', 'Q', 'Q', 'Q'}
    }
  };
BlockMed r = {
    'r',
    {
      {'R', 'R', 'R', ' '},
      {'R', ' ', ' ', 'R'},
      {'R', 'R', 'R', ' '},
      {'R', ' ', 'R', ' '},
      {'R', ' ', ' ', 'R'}
    }
  };
BlockMed s = {
    's',
    {
      {' ', 'S', 'S', 'S'},
      {'S', ' ', ' ', ' '},
      {' ', 'S', 'S', ' '},
      {' ', ' ', ' ', 'S'},
      {'S', 'S', 'S', ' '}
    }
  };
BlockSmall t = {
    't',
    {
      {'T', 'T', 'T',},
      {' ', 'T', ' ',},
      {' ', 'T', ' ',},
      {' ', 'T', ' ',},
      {' ', 'T', ' ',}
    }
  };
BlockMed u = {
    'u',
    {
      {'U', ' ', ' ', 'U'},
      {'U', ' ', ' ', 'U'},
      {'U', ' ', ' ', 'U'},
      {'U', ' ', ' ', 'U'},
      {'U', 'U', 'U', 'U'}
    }
  };
BlockMed v = {
    'v',
    {
      {'V', ' ', ' ', 'V'},
      {'V', ' ', ' ', 'V'},
      {'V', ' ', ' ', 'V'},
      {'V', ' ', ' ', 'V'},
      {' ', 'V', 'V', ' '}
    }
  };
BlockLarge w = {
    'w',
    {
      {'W', ' ', ' ', ' ', 'W'},
      {'W', ' ', ' ', ' ', 'W'},
      {'W', ' ', 'W', ' ', 'W'},
      {'W', 'W', ' ', 'W', 'W'},
      {'W', ' ', ' ', ' ', 'W'}
    }
  };
BlockMed x = {
    'x',
    {
      {'X', ' ', ' ', 'X'},
      {'X', ' ', ' ', 'X'},
      {' ', 'X', 'X', ' '},
      {'X', ' ', ' ', 'X'},
      {'X', ' ', ' ', 'X'}
    }
  };
BlockLarge y = {
    'y',
    {
      {'Y', ' ', ' ', ' ', 'Y'},
      {' ', 'Y', ' ', 'Y', ' '},
      {' ', ' ', 'Y', ' ', ' '},
      {' ', ' ', 'Y', ' ', ' '},
      {' ', ' ', 'Y', ' ', ' '}
    }
  };
BlockMed z = {
    'z',
    {
      {'Z', 'Z', 'Z', 'Z'},
      {' ', ' ', ' ', 'Z'},
      {' ', ' ', 'Z', ' '},
      {' ', 'Z', ' ', ' '},
      {'Z', 'Z', 'Z', 'Z'}
    }
  };

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

void printLetterSmall(BlockSmall letter) {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%c", letter[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main(void) {

  
  
  /*
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
  */
  
  return 0;
}