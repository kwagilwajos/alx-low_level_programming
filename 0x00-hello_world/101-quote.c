#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main() {
    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int stderr_fd = open("/dev/stderr", O_WRONLY);

    write(stderr_fd, message, strlen(message));
    close(stderr_fd);

    return 1;
}
