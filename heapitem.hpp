//
//  heapitem.hpp
//  chess
//
//  Created by Marcel Haupt on 14.12.15.
//  Copyright © 2015 Marcel Haupt. All rights reserved.
//

#pragma once

class HeapItem {
protected:
    unsigned int heapIndex;
    
public:
    void setHeapIndex(unsigned int index) { heapIndex = index; }
    unsigned int getHeapIndex() { return heapIndex; }
};
