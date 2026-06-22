# コンパイラとオプション
CC = gcc
CFLAGS = -Wall
TARGET = main.exe

# ソースファイルとオブジェクトファイル
# main.c には storage.c と question.c がインクルードされているため、
# コンパイル対象は main.c のみで動作するように書かれています
SRCS = main.c
OBJS = $(SRCS:.c=.o)

# デフォルトターゲット
all: $(TARGET)

# 実行ファイルの作成
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# クリーンアップ（生成物を削除）
clean:
	del /Q $(TARGET) $(OBJS)

.PHONY: all clean