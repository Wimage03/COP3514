#include <stdio.h>

void toLower(char *input) {
  while(*input++ != '\0') {
    if(*input >= 'A' && *input <= 'Z') *input += 32;
  }
}

int main(int argc, char *argv[]) {
  printf("argv[1]: %s",argv[1]);
}