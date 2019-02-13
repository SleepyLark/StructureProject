//
//  List.h
//  StructureProject
//
//  Created by Fitzgerald, Skyler on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <assert.h>
#include "../LinearNode.hpp"

template <class Type>
class List
{
protected:
    int size;
public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper
    virtual int getSizer() const = 0;
    virtual LinearNode<Type> * getFront() =0;
    virtual LinearNode<Type> * getEnd() = 0;
};

#endif /* List_h */
