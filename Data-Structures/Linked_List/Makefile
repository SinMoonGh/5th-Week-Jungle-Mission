CC = gcc
CFLAGS = -Wall -g
TARGET = Q5_A_LL

# 기본 명령
all: $(TARGET)

$(TARGET): Q5_A_LL.c
	$(CC) $(CFLAGS) -o $(TARGET) Q5_A_LL.c

# 실행 파일, 오브젝트 삭제
clean:
	rm -f $(TARGET)
