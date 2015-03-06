//
//  GossipNeighborEntry.cpp
//  CourseraCloudComputing Assignment1
//
//  Created by Zhi Li on 3/5/15.
//  Copyright (c) 2015 Zhi Li. All rights reserved.
//

#include "GossipNeighborEntry.h"
#include <ctime>

GossipNeighborEntry::GossipNeighborEntry(Address &address) {
    this->address = address;
    this->id = 0;
    this->time = std::time(nullptr);
}

GossipNeighborEntry::GossipNeighborEntry(Address &address, int id, time_t time) {
    this->address = address;
    this->id = id;
    this->time = time;
}

bool GossipNeighborEntry::isNewerCompareTo(GossipNeighborEntry &entry) {
    return this->time > entry.time;
}