/**
 * The Kilometer text editor
 *
 * Kilometer is loosely based off of the [kilo
 * tutorial](https://viewsourcecode.org/snaptoken/kilo) and in general is like
 * kilo, but more extensible and makes a few different design decisions so that
 * it's easy to use and extend.
 */
#include <termios.h>
#include <unistd.h>

void enableRawMode() {
	struct termios raw;

	tcgetattr(STDIN_FILENO, &raw);
}

int main() {
  char c;
  while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q')
    ;
  return 0;
}
