//
// Created by JavaMan on 2021/11/15.
//

#ifndef JAVARTCPPIMPL_OBJECT_H
#define JAVARTCPPIMPL_OBJECT_H

#include <iostream>

namespace java {

    namespace lang {

//        extern class String;

        class Object {

        public:
            virtual bool equals(Object *object);

            virtual int hashCode();

//            virtual java::lang::String toString();
            virtual std::string toString();
        };
    }
}

#endif //JAVARTCPPIMPL_OBJECT_H
