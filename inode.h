#ifndef __INODE__FILESYSTEM_JUN__
#define __INODE__FILESYSTEM_JUN__

#include "common.h"

struct inode {
    ushort flags;
    char nlinks;
    char uid;
    char gid;
    char padding[3];
    uint size;
    uint addr[21];
    long actime[2];
    long modtime[2];
};

#define INODESIZE sizeof(struct inode)
#define INODES_PER_BLOCK BLOCKSIZE/INODESIZE 

#endif
