//
//  GossipNeighborEntry.h
//  CourseraCloudComputing Assignment1
//
//  Created by Zhi Li on 3/5/15.
//  Copyright (c) 2015 Zhi Li. All rights reserved.
//

#ifndef __CourseraCloudComputing_Assignment1__GossipNeighborEntry__
#define __CourseraCloudComputing_Assignment1__GossipNeighborEntry__

#include <stdio.h>
#include "Member.h"

using std::time_t;

#endif /* defined(__CourseraCloudComputing_Assignment1__GossipNeighborEntry__) */

class GossipNeighborEntry {
private:
    Address address;
    int id;
    time_t time;
public:
    GossipNeighborEntry(Address &address);
    GossipNeighborEntry(Address &address, int id, time_t time);
    bool isNewerCompareTo(GossipNeighborEntry &entry);
};