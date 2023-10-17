#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char *str, int n);

int main(void) {

  char reminders[MAX_REMIND][MSG_LEN + 3];
  char day_str[3], msg_str[MSG_LEN + 1];
  int day, num_remind = 0;

  for(;;) {
    if(num_remind == MAX_REMIND) {
      printf("-- No space left --");
      break;
    }
    printf("Enter day and reminder");
    scanf("%2d", &day);
    if(day == 0) break;
    
     
  }

  char message[MSG_LEN];
  read_line(message, MSG_LEN);
  printf("%s\n", message);


}

int read_line(char *str, int n) {
  int count = 0;
  char ch;
  while((ch = getchar()) != '\n') {
    if(count < n) {
      *str++ = ch;
      count++;
    }
  }
  return count;
}