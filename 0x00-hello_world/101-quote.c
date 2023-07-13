#include <unistd.h>
#include <string.h>

int main() {

const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

size_t len = strlen(message);

write(1, message, len);

return 1;

}
