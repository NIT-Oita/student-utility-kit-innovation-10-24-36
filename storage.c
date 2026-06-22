#include <stdio.h>

// 単語と意味をwords.txtに保存する関数
void newword(char word[1024], char mean[1024]){
    // ファイルを開く
    FILE *fp = fopen("words.txt", "a");

    // ファイルを開けなかった場合
    if(fp == NULL){
        printf("ファイルを開けませんでした");
        return;
    }

    // 単語と意味をファイルへ書き込む
    fprintf(fp, "%s %s\n", word, mean);
    printf("word: %s, mean: %sで単語帳に登録しました！\n", word, mean);

    // ファイルを閉じる
    fclose(fp);
}
