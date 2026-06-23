#ifdef _WIN32
#include <windows.h>
#endif

#include <stdio.h>
#include "storage.c"
#include "question.c"
#include "storage.h"

int main(){

    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif

    int Snum;
    char tango[256];
    char mean[256]; 
    midasi("暗記フラッシュカード");
    START:
    printf("開始: 1\n単語を追加: 2\n終了: 3\n");

    if (scanf("%d", &Snum) != 1) {
        while (getchar() != '\n');
        Snum = 0; 
    }

    switch( Snum ){
        case 1:
            midasi("======スタート======");
            card();
            goto START;

        case 2:
            printf("単語を追加してください\n");
            scanf("%255s", tango);
            printf("意味を追加してください\n");
            scanf("%255s", mean);
            newword(tango, mean);
            goto START;

        case 3:
            midasi("=====終了します=====");
            kaigyo(3);
            midasi("暗記フラッシュカード");
            return 0;

        default:
            printf("指定のない値です\n");
            break;
    }
    midasi("暗記フラッシュカード");
    kaigyo(3);
    return 0;
}