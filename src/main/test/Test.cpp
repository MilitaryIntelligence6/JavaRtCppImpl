//
// Created by JavaMan on 2021/11/15.
//

#include <cstdio>
#include "java/util/ArrayList.hpp"

int main(int argc, char **argv) {
    java::util::List<int *> *list = new java::util::ArrayList<int *>;
    int a = 1;
    list->add(0, &a);
    delete list;
    printf("hello\n");
    printf("hello\n");
}
