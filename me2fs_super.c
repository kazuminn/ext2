#include <linux/module.h>
#include <linux/fs.h>
#include <linux/blkdev.h>
#include <linux/buffer_head.h>

#include "me2fs.h"
#include "me2fs_util.h"


static int me2fsFillSuperBlock( struct super_block *sb, void *data, int silent);


struct dentry*
me2fsMountBlockDev( struct file_system_type *fs_type,
                    int flags,
                    const char *dev_name,
                    void *data )
{
    return( mount_bdev( fs_type, flags, dev_name, data, me2fsFillSuperBlock ) );
}



static int me2fsFillSuperBlock(struct super_block *sb, void *data, int silent)
{
    DBGPRINT( "<ME2FS>fill_super!");
    return 0;
}
