//
// Created by Ivo Georgiev on 2019-02-19.
//
#include <stdio.h>


int global_i = 9; // globals should be avoided
// this is just for convenience of illustration

// Arguments in C functions are passed BY VALUE, including pointers,
// so this function will not change the original variable the value
// of which was used to assign the argument, in this case, global_i.
// It will change the value of argument_i, but it is only a local
// copy of global_i (see the function call in main() below).
void wont_change(int *argument_i) {
    *argument_i = 10;

}

// If we want a function to change a variable outside (the scope of)
// the function, we need to pass it a pointer to that variable.
// This function will change the original
void change_inside(int *pointer_to_global_i) {
    *pointer_to_global_i = 10; // dereference and assign a new value
}
int now_changed(int num){ // adding by 1
    return num + 1;
}

void changed( int *dum){
    *dum = 7;
}
struct student_record {
    char first_name[5];      // these are called members or fields
    char last_name[5];       // they can be of any type
    char nine_hundred[5];
    int year_first_enrolled;
};



int main() {
    int a = 0;

    printf("%d\n", global_i);
    wont_change(&global_i);
    printf("%d\n", global_i);
    change_inside(&global_i);
    printf("%d\n", global_i);

    global_i = now_changed(global_i);
    printf("%d\n", global_i);
    changed(&global_i);
    printf("%d\n", global_i);
    int iarray[10];

    // until the elements are explicitly assigned,
    // their contents are undefined (read, garbage)


// here's a loop that zeros out the array
    for (int i = 0; i < 10; i ++) {
        a++;
        iarray[i] = 0 + a;
        printf("%d\n", iarray[i]);
    }
    char array[] = {"someThingSomeThingAllTheTime"};
    for (int i = 0; i < 10; i ++) {



        printf("%c\n", array[i]);
    }
    int ray[] = {5,10,89,3,50}; // size of gives the size of bytes
    int ray_size = (sizeof(ray) / sizeof(ray[0])); // sizeof(ray) gives total bytes and sizeof(ray[0]) gives bytes of
                                                   // one
    printf("size of ray %d\n", ray_size);

    int reey[50];
    reey[5] = 10;
    printf("5th index is %d \n", reey[5]);


    // struck
    struct student_record jm123 = { "john", "michaels", "900123456", 1994 };
    printf("%s-%s-%s-%d\n", jm123.first_name,
           jm123.last_name,
           jm123.nine_hundred,
           jm123.year_first_enrolled);
    struct student_record *student_pointer = &jm123;
    printf("%s-%s-%s-%d\n", student_pointer->first_name,
           student_pointer->last_name,
           student_pointer->nine_hundred,
           student_pointer->year_first_enrolled);




    return 0;
}