//
// Created by JavaMan on 2021/11/15.
//

#ifndef JAVARTCPPIMPL_COLLECTION_H
#define JAVARTCPPIMPL_COLLECTION_H

#include "Iterator.h"
#include "Stub.hpp"

namespace java {

    namespace util {

        template<class E>
        class Collection {

        public:

            virtual int size() const = 0;

            virtual bool isEmpty() const = 0;

            virtual bool contains(E e) const = 0;

            virtual E *toArray() const = 0;

            virtual Iterator<E> iterator() const = 0;

            virtual bool add(E e) = 0;

            virtual bool remove(E e) = 0;

            virtual bool containsAll(Collection<E> c) const = 0;

            virtual bool addAll(Collection<E> c) = 0;

            virtual bool removeAll(Collection<E> c) = 0;

            /**
             *     default boolean removeIf(Predicate<? super E> filter) {
                        Objects.requireNonNull(filter);
                        boolean removed = false;
                        final Iterator<E> each = iterator();
                        while (each.hasNext()) {
                            if (filter.test(each.next())) {
                                each.remove();
                                removed = true;
                            }
                        }
                        return removed;
                    }
             * @param stub
             * @return
             */
            virtual bool removeIf(java::unimpl::Stub *stub);

            virtual bool retainAll(Collection<E> *c) = 0;

            virtual void clear() = 0;

            virtual bool equals(Collection<E> *c) = 0;


            /**
             * Creates a {@link Spliterator} over the elements in this collection.
             *
             * Implementations should document characteristic values reported by the
             * spliterator.  Such characteristic values are not required to be reported
             * if the spliterator reports {@link Spliterator#SIZED} and this collection
             * contains no elements.
             *
             * <p>The default implementation should be overridden by subclasses that
             * can return a more efficient spliterator.  In order to
             * preserve expected laziness behavior for the {@link #stream()} and
             * {@link #parallelStream()}} methods, spliterators should either have the
             * characteristic of {@code IMMUTABLE} or {@code CONCURRENT}, or be
             * <em><a href="Spliterator.html#binding">late-binding</a></em>.
             * If none of these is practical, the overriding class should describe the
             * spliterator's documented policy of binding and structural interference,
             * and should override the {@link #stream()} and {@link #parallelStream()}
             * methods to create streams using a {@code Supplier} of the spliterator,
             * as in:
             * <pre>{@code
             *     Stream<E> s = StreamSupport.stream(() -> spliterator(), spliteratorCharacteristics)
             * }</pre>
             * <p>These requirements ensure that streams produced by the
             * {@link #stream()} and {@link #parallelStream()} methods will reflect the
             * contents of the collection as of initiation of the terminal stream
             * operation.
             *
             * @implSpec
             * The default implementation creates a
             * <em><a href="Spliterator.html#binding">late-binding</a></em> spliterator
             * from the collections's {@code Iterator}.  The spliterator inherits the
             * <em>fail-fast</em> properties of the collection's iterator.
             * <p>
             * The created {@code Spliterator} reports {@link Spliterator#SIZED}.
             *
             * @implNote
             * The created {@code Spliterator} additionally reports
             * {@link Spliterator#SUBSIZED}.
             *
             * <p>If a spliterator covers no elements then the reporting of additional
             * characteristic values, beyond that of {@code SIZED} and {@code SUBSIZED},
             * does not aid clients to control, specialize or simplify computation.
             * However, this does enable shared use of an immutable and empty
             * spliterator instance (see {@link Spliterators#emptySpliterator()}) for
             * empty collections, and enables clients to determine if such a spliterator
             * covers no elements.
             *
             * @return a {@code Spliterator} over the elements in this collection
             * @since 1.8
             */
//            @Override
//            default Spliterator<E> spliterator() {
//                return Spliterators.spliterator(this, 0);
//            }

            /**
             * Returns a sequential {@code Stream} with this collection as its source.
             *
             * <p>This method should be overridden when the {@link #spliterator()}
             * method cannot return a spliterator that is {@code IMMUTABLE},
             * {@code CONCURRENT}, or <em>late-binding</em>. (See {@link #spliterator()}
             * for details.)
             *
             * @implSpec
             * The default implementation creates a sequential {@code Stream} from the
             * collection's {@code Spliterator}.
             *
             * @return a sequential {@code Stream} over the elements in this collection
             * @since 1.8
             */
//            default Stream<E> stream() {
//                return StreamSupport.stream(spliterator(), false);
//            }

            /**
             * Returns a possibly parallel {@code Stream} with this collection as its
             * source.  It is allowable for this method to return a sequential stream.
             *
             * <p>This method should be overridden when the {@link #spliterator()}
             * method cannot return a spliterator that is {@code IMMUTABLE},
             * {@code CONCURRENT}, or <em>late-binding</em>. (See {@link #spliterator()}
             * for details.)
             *
             * @implSpec
             * The default implementation creates a parallel {@code Stream} from the
             * collection's {@code Spliterator}.
             *
             * @return a possibly parallel {@code Stream} over the elements in this
             * collection
             * @since 1.8
             */
//            default Stream<E> parallelStream() {
//                return StreamSupport.stream(spliterator(), true);
//            }
        };
    }
}


#endif //JAVARTCPPIMPL_COLLECTION_H
