#include <linux/module.h>
#include <linux/fs.h>

#include "me2fs.h"
#include "me2fs_util.h"


#define ME2FS_VERSION_SSTRING	"me2fs_0.01"

#define ME2FS_MODULE_DESC	"my ex2 file system (me2fs)"
#define ME2FS_MODULE_AUTHOR	"kinoshita"

/*
-----------------------------------------------------------------
File system type
-----------------------------------------------------------------
*/

static struct file_system_type me2fs_fstype =
{
    .name	= "me2fs",
    .mount      = me2fs_mount,
    .fs_flags   = FS_REQUIRES_DEV,
};

static struct dentry *me2fs_mount( struct file_system_type *fs_type,
                                  int flags,
                                  const char *dev_name,
                                  void *data )
{
    DBGPRINT( "<ME2FS>: i am not yet implemented.\n" );
    return( NULL );
}


static int __init initMe2fs( void )
{
    DBGPRINT( "(Me2FS)Hello, world\n" );

    return ( register_filesystem( &me2fs_fstype ));
}

static void __exit exitMe2fs( void )
{
    DBGPRINT( "(Me2FS)Good-bye!\n" );

    unregister_filesystem( &me2fs_fstype );
}



module_init( initMe2fs );
module_exit( exitMe2fs );

MODULE_AUTHOR( ME2FS_MODULE_AUTHOR );
MODULE_DESCRIPTION( ME2FS_MODULE_DESC );
MODULE_LICENSE ("GPL");
