CFLAGS := -Wall -Wextra -pedantic -std=c99
LDFLAGS := -flto

OBJECTS = kilometer.o

kilometer: $(OBJECTS)
	$(CC) -o $@ $^ -std=c99

.PHONY: run

run: kilometer
	$(shell realpath $<)
