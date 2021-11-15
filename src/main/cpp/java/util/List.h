//
// Created by JavaMan on 2021/11/15.
//

#ifndef JAVARTCPPIMPL_LIST_H
#define JAVARTCPPIMPL_LIST_H

#include "Collection.h"
#include "Stub.hpp"

namespace java {
    namespace util {
        template<class E>
        class List : public Collection<E> {

        public:

            virtual bool addAll(int index, Collection<E> c) = 0;

            /**
             *    default void replaceAll(UnaryOperator<E> operator) {
                        Objects.requireNonNull(operator);
                        final ListIterator<E> li = this.listIterator();
                        while (li.hasNext()) {
                            li.set(operator.apply(li.next()));
                        }
                    }
                    shit
             */
            virtual void replaceAll(java::unimpl::Stub theOperator) = 0;

            /**
             *     default void sort(Comparator<? super E> c) {
                        Object[] a = this.toArray();
                        Arrays.sort(a, (Comparator) c);
                        ListIterator<E> i = this.listIterator();
                        for (Object e : a) {
                            i.next();
                            i.set((E) e);
                        }
                    }
             */
            virtual void sort(java::unimpl::Stub c) = 0;

            virtual E get(int index) const = 0;

            virtual E set(int index, E element) = 0;

            virtual void add(int index, E element) = 0;

            virtual E remove(int index) = 0;

            virtual int indexOf(E e) const = 0;

            virtual int lastIndexOf(E e) const = 0;

            /**
             * ListIterator<E> listIterator();
             * @return
             */
            virtual java::unimpl::Stub listIterator() const = 0;

//            virtual List<E> *subList(int formIndex, int toIndex) const = 0;

            /**
             * jdk 11
             *     static <E> List<E> of(E... elements) {
                        switch (elements.length) { // implicit null check of elements
                            case 0:
                                return ImmutableCollections.emptyList();
                            case 1:
                                return new ImmutableCollections.List12<>(elements[0]);
                            case 2:
                                return new ImmutableCollections.List12<>(elements[0], elements[1]);
                            default:
                                return new ImmutableCollections.ListN<>(elements);
                        }
                    }
             */

            /**
             * jdk 11
             *     static <E> List<E> copyOf(Collection<? extends E> coll) {
                        return ImmutableCollections.listCopy(coll);
                    }

             */
        };
    }
}


#endif //JAVARTCPPIMPL_LIST_H
