#include<stdio.h>

void newword(char word[1000], char mean[1000]){
    FILE *fp = fopen("words.txt", "a");

    if( fp == NULL ){
        printf("ファイルを開けませんでした");
        return;
    }

    fprintf(fp, "%s %s\n", word, mean);
    printf("word: %s, mean: %sで単語帳に登録しました！\n", word, mean);
    fclose(fp);
}