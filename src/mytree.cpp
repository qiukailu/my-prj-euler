//
//  mytree.cpp
//  
//
//  Created by Qiukai Lu on 8/4/16.
//
//
#include <cstdio>
#include <algorithm>

#include "include/mytree.h"

leaf::leaf(int i)
{
    m_value = i;
    m_left  = NULL;
    m_right = NULL;
}

leaf::leaf(int i, leaf** left, leaf** right)
{
    setValue(i);
    setLeft(left);
    setRight(right);
}

void leaf::setLeft(leaf ** p_leaf) {
    m_left = *p_leaf;
}

void leaf::setRight(leaf ** p_leaf ) {
    m_right = *p_leaf;
}

void leaf::setValue(int i_value){
    m_value = i_value;
}

int leaf::max_sum() {
    if (getLeft() == NULL && getRight() == NULL) {
      return getValue();
    }

    int sum = getValue() + std::max(m_left->max_sum(), m_right->max_sum());
    return sum;
}

leaf* leaf::getLeft() {
    return m_left;
}

leaf* leaf::getRight() {
    return m_right;
}

int leaf::getValue() {
    return m_value;
}
