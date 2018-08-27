#include "list_test.h"

int main(){

    if (test_create_list()){
        puts("WORKS");
    }
    else{
        puts("NOT WORKS");
    }

    if (test_add_to_list()){
        puts("WORKS");
    }
    else{
        puts("NOT WORK");
    }

    if (test_remove_from_list()){
        puts("WORKS");
    }
    else{
        puts("NOT WORKS");
    }

    if (test_flush_list()){
        puts("WORKS");
    }
    else{
        puts("NOT WORKS");
    }
    
    if (test_free_list()){
        puts("WORKS");
    }
    else{
        puts("NOT WORKS");
    }


}