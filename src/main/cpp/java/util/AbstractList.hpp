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

        private:

            void checkForComodification();

        protected:
            int modCount = 0;


        public:

            virtual bool add(E e);

            virtual E get(int index) = 0;

            virtual E set(int index, E element) = 0;

            virtual void add(int index, E element) = 0;

            virtual E remove(int index) = 0;
        };

        template<class E>
        bool util::AbstractList<E>::add(E e) {
            this->add(this->size(), e);
            return true;
        }
    }
}


#endif //JAVARTCPPIMPL_ABSTRACTLIST_H
