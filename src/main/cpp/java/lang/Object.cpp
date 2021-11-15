//
// Created by JavaMan on 2021/11/15.
//

#include "Object.h"

bool java::lang::Object::equals(java::lang::Object *object) {
    return (this == object);
}

int java::lang::Object::hashCode() {
    return 0;
}

std::string java::lang::Object::toString() {
    return "un impl";
}

//java::lang::String java::lang::Object::toString() {
//    return java::lang::String();
//    return nullptr;
//}
