
#ifndef STORAGE_H
#define STORAGE_H

#define MAX_TEXT 1024
#define MAX_CARDS 100

typedef struct {
    char word[MAX_TEXT];
    char meaning[MAX_TEXT];
    int total_attempts;
    int correct_count;
} FlashCard;

int load_cards(const char *filename, FlashCard cards[], int max_cards);
void save_cards(const char *filename, FlashCard cards[], int card_count);

void newword(char word[1000], char mean[1000]);
void card();
void midasi(char str[]);
void kaigyo(int kaisu);

#endif

