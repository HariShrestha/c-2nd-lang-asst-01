//
// Created by samsung on 3/3/2019.
//
# include <stdio.h>
void show_f(){
    printf("First time using different function in c language\n");
}


int now_changed(int num){ // adding by 1
    return num + 1;
}

void changed( int *dum){

    *dum = 7;
}