//
// Created by JavaMan on 2021/11/15.
//

#ifndef JAVARTCPPIMPL_ABSTRACTLIST_H
#define JAVARTCPPIMPL_ABSTRACTLIST_H

#include "java/lang/Cloneable.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"

namespace java {

    namespace util {

        template<class E>
        class AbstractList<E> :
                public java::util::List<E>,
                public java::lang::Cloneable,
                public java::io::Serializable {

        public:
            virtual E get(int index) = 0;
        };
    }
}


#endif //JAVARTCPPIMPL_ABSTRACTLIST_H
