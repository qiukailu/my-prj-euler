//
//  mytree.h
//  
//
//  Created by Qiukai Lu on 8/4/16.
//
//

#ifndef mytree_h
#define mytree_h

class leaf {
private:
    leaf * m_left;
    leaf * m_right;
    int m_value;
    
    // disable default ctor
    leaf();
    
public:
    leaf(int i);
    leaf(int i, leaf** left, leaf** right);
    
    void setLeft(leaf ** p_leaf);
    void setRight(leaf ** p_leaf);
    void setValue(int i_value);
    
    leaf* getLeft();
    leaf* getRight();
    int   getValue();

    int   max_sum();
};

#endif /* mytree_h */
