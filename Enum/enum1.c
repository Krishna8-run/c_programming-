#include <stdio.h>
enum permission {
    READ = 1,
    WRITE = 2,
    EXECUTE = 4
};
int main() {
    int permission=READ &WRITE &EXECUTE;
    printf("%d", permission);
    return 0;
}