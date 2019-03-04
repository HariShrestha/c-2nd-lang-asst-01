#include <stdio.h>
int global_i = 10;

void show_f();

int now_changed(int num);

void changed( int *dum);
int main() {
    show_f();
    printf("Hello,./.... World!\n");
    global_i = now_changed(global_i);
    printf("num: %d\n", global_i);

    changed(&global_i);
    printf("new num:%d", global_i );

    printf("commit");

    return 0;
}
