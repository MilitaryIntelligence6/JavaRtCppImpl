//
// Created by JavaMan on 2021/11/15.
//

#ifndef JAVARTCPPIMPL_ARRAYLIST_HPP
#define JAVARTCPPIMPL_ARRAYLIST_HPP

#include <ostream>
#include "java/util/List.h"
#include "java/util/AbstractList.hpp"

namespace java {

    namespace util {

        template<class E>
        class ArrayList :
                public java::util::AbstractList<E>,
                public java::util::List<E>,
                public java::lang::Cloneable,
                public java::io::Serializable {

        private:
            static const int DEFAULT_CAPACITY = 10;

            static constexpr E EMPTY_ELEMENTDATA[] = {};

            static constexpr E DEFAULTCAPACITY_EMPTY_ELEMENTDATA[] = {};

            int listSize;

            /**
             * values 数组, 不能给数组赋值;
             */
            E *elementData;

            static int calculateCapacity(E eleData[], int minCapacity);

            void ensureCapacityInternal(int minCapacity);

            void ensureExplicitCapacity(int minCapacity);

//            int modCount = 0;

        public:
            ArrayList();

            explicit ArrayList(int initialCapacity);

            ~ArrayList();

            int size() const override;

            bool isEmpty() const override;

            bool contains(E e) const override;

            E *toArray() const override;

            Iterator<E> iterator() const override;

            bool add(E e) override;

            bool remove(E e) override;

            bool containsAll(Collection<E> c) const override;

            bool addAll(Collection<E> c) override;

            bool removeAll(Collection<E> c) override;

            bool retainAll(Collection<E> *c) override;

            void clear() override;

            bool equals(Collection<E> *c) override;

            bool addAll(int index, Collection<E> c) override;

            void replaceAll(java::unimpl::Stub theOperator) override;

            void sort(java::unimpl::Stub c) override;

            E get(int index) const override;

            E set(int index, E element) override;

            void add(int index, E element) override;

            E remove(int index) override;

            int indexOf(E e) const override;

            int lastIndexOf(E e) const override;

            unimpl::Stub listIterator() const override;

            List<E> *subList(int formIndex, int toIndex) const override;

            E get(int index) override;
        };

        template<class E>
        ArrayList<E>::ArrayList() {
            this->elementData = (E *) DEFAULTCAPACITY_EMPTY_ELEMENTDATA;
        }

        template<class E>
        ArrayList<E>::ArrayList(int initialCapacity) {
            if (initialCapacity > 0) {
                this->elementData = new E[initialCapacity];
            } else if (initialCapacity == 0) {
                this->elementData = EMPTY_ELEMENTDATA;
            } else {
                std::cerr << "IllegalArgumentException(\"Illegal Capacity: initialCapacity);" << std::endl;
            }
        }

        template<class E>
        ArrayList<E>::~ArrayList() {
            if (elementData) {
                delete[] elementData;
                elementData = nullptr;
            }
        }

        template<class E>
        int ArrayList<E>::size() const {
            return listSize;
        }

        template<class E>
        bool ArrayList<E>::isEmpty() const {
            return listSize == 0;
        }

        template<class E>
        bool ArrayList<E>::contains(E e) const {
            return indexOf(e) >= 0;
        }

        template<class E>
        int ArrayList<E>::indexOf(E e) const {
            for (int i = 0; i < listSize; ++i) {
                if (e == elementData[i]) {
                    return i;
                }
            }
            return -1;
        }

        template<class E>
        E *ArrayList<E>::toArray() const {
            return nullptr;
        }

        template<class E>
        Iterator<E> ArrayList<E>::iterator() const {
            return Iterator<E>();
        }

        template<class E>
        bool ArrayList<E>::add(E e) {

            elementData[listSize++] = e;
            return true;
        }

        template<class E>
        bool ArrayList<E>::remove(E e) {
            return false;
        }

        template<class E>
        bool ArrayList<E>::containsAll(Collection<E> c) const {
            return false;
        }

        template<class E>
        bool ArrayList<E>::addAll(Collection<E> c) {
            return false;
        }

        template<class E>
        bool ArrayList<E>::removeAll(Collection<E> c) {
            return false;
        }

        template<class E>
        bool ArrayList<E>::retainAll(Collection<E> *c) {
            return false;
        }

        template<class E>
        void ArrayList<E>::clear() {

        }

        template<class E>
        bool ArrayList<E>::equals(Collection<E> *c) {
            return false;
        }

        template<class E>
        bool ArrayList<E>::addAll(int index, Collection<E> c) {
            return false;
        }

        template<class E>
        void ArrayList<E>::replaceAll(java::unimpl::Stub theOperator) {

        }

        template<class E>
        void ArrayList<E>::sort(java::unimpl::Stub c) {

        }

        template<class E>
        E ArrayList<E>::get(int index) const {
            return nullptr;
        }

        template<class E>
        E ArrayList<E>::set(int index, E element) {
            return nullptr;
        }

        template<class E>
        void ArrayList<E>::add(int index, E element) {

        }

        template<class E>
        E ArrayList<E>::remove(int index) {
            return nullptr;
        }

        template<class E>
        int ArrayList<E>::lastIndexOf(E e) const {
            return 0;
        }

        template<class E>
        unimpl::Stub ArrayList<E>::listIterator() const {
            return unimpl::Stub();
        }

        template<class E>
        List<E> *ArrayList<E>::subList(int formIndex, int toIndex) const {
            return new ArrayList<E>();
        }

        template<class E>
        E ArrayList<E>::get(int index) {
            return nullptr;
        }

        template<class E>
        int ArrayList<E>::calculateCapacity(E *eleData, int minCapacity) {
            if (eleData == DEFAULTCAPACITY_EMPTY_ELEMENTDATA) {
                return std::(DEFAULT_CAPACITY, minCapacity);
            }
            return 0;
        }

        template<class E>
        void ArrayList<E>::ensureCapacityInternal(int minCapacity) {

        }

        template<class E>
        void ArrayList<E>::ensureExplicitCapacity(int minCapacity) {

        }
    }
}

#endif //JAVARTCPPIMPL_ARRAYLIST_HPP
