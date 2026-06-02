#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "ui.c"

void card(){
    FILE *fp = fopen("words.txt", "r");
    if (fp == NULL) {
        perror("ファイルを開けません");
        return;
    }

    int count = 0;
    int tCount = 0;
    int ch;
    char buf[1024];
    char word1[1024];
    char word2[1024];
    char answer[1024];
    // ファイルの終わりまで1文字ずつ読み込み
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    rewind(fp);

    for( int i = 0; i < count; i++ ){
        printf("                    count: %d\n", tCount + 1);

        if( fgets(buf, sizeof(buf), fp ) != NULL){
            if(sscanf( buf, "%s %s", word1, word2 ) == 2){
                printf("%sの意味は？\n", word1);
                scanf("%s", answer);
                Sleep( 500 );
                if( strcmp( word2, answer ) == 0 ){
                    printf("答えが一致しました!!!");
                    kaigyo(2);
                    tCount++;
                }
                else {
                    printf("不正解.正解は%sです.", word2);
                    kaigyo(2);
                }
                Sleep( 500 );
            }
            else {
                    printf("ファイル作成ミスです.\n");
                }
        }
    }
    fclose(fp);
}