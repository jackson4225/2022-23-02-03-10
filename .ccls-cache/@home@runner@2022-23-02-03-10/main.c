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

void printLetterMed(BlockMed letter) {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 4; j++) {
      printf("%c", letter.block[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void printLetterLarge(BlockLarge letter) {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      printf("%c", letter.block[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void printLetterSmall(BlockSmall letter) {
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%c", letter.block[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main(void) {


  char userinput;
  printf("Type in a letter of your choice: ");
  scanf("%c", &userinput);

  if(userinput == 'a' || userinput == 'A') {
    printLetterMed(a);
  }
  else if(userinput == 'b' || userinput == 'B') {
    printLetterMed(b);
  }
  else if(userinput == 'c' || userinput == 'C') {
    printLetterMed(c);
  }
  else if(userinput == 'd' || userinput == 'D') {
    printLetterMed(d);
  }
  else if(userinput == 'e' || userinput == 'E') {
    printLetterMed(e);
  }
  else if(userinput == 'f' || userinput == 'F') {
    printLetterMed(f);
  }
  else if(userinput == 'g' || userinput == 'G') {
    printLetterMed(g);
  }
  else if(userinput == 'h' || userinput == 'H') {
    printLetterMed(h);
  }
  else if(userinput == 'i' || userinput == 'I') {
    printLetterSmall(i);
  }
  else if(userinput == 'j' || userinput == 'J') {
    printLetterMed(j);
  }
  else if(userinput == 'k' || userinput == 'K') {
    printLetterMed(k);
  }
  else if(userinput == 'l' || userinput == 'L') {
    printLetterMed(l);
  }
  else if(userinput == 'm' || userinput == 'M') {
    printLetterLarge(m);
  }
  else if(userinput == 'n' || userinput == 'n') {
    printLetterMed(n);
  }
  else if(userinput == 'o' || userinput == 'O')  {
    printLetterMed(o);
  }
  else if(userinput == 'p' || userinput == 'P') {
    printLetterMed(p);
  }
  else if(userinput == 'q' || userinput == 'Q') {
    printLetterMed(q);
  }
  else if(userinput == 'r' || userinput == 'R') {
    printLetterMed(r);
  }
  else if(userinput == 's' || userinput == 'S') {
    printLetterMed(s);
  }
  else if(userinput == 't' || userinput == 'T') {
    printLetterSmall(t);
  }
  else if(userinput == 'u' || userinput == 'U') {
    printLetterMed(u);
  }
  else if(userinput == 'v' || userinput == 'V') {
    printLetterMed(v);
  }
  else if(userinput == 'w' || userinput == 'W') {
    printLetterLarge(w);
  }
  else if(userinput == 'x' || userinput == 'X') {
    printLetterMed(x);
  }
  else if(userinput == 'y' || userinput == 'Y') {
    printLetterLarge(y);
  }
  else if(userinput == 'z' || userinput == 'Z') {
    printLetterMed(z);
  }
  
  
  return 0;
}