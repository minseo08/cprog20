CC = gcc
TARGET = project
OBJS = project.o

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) -o $@ $^

.c.o :
	$(CC) -c -o $@ $<

clean :
	rm -f $(OBJS) $(TARGET)
