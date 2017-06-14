#include <linux/module.h>

#include "me2fs.h"
#include "me2fs_util.h"


#define ME2FS_VERSION_SSTRING	"me2fs_0.01"

#define ME2FS_MODULE_DESC	"my ex2 file system (me2fs)"
#define ME2FS_MODULE_AUTHOR	"kinoshita"

static int __init initMe2fs( void )
{
    DBGPRINT( "(Me2FS)Hello, world\n" );

    return (0);
}

static void __exit exitMe2fs( void )
{
    DBGPRINT( "(Me2FS)Good-bye!\n" );
}



module_init( initMe2fs );
module_exit( exitMe2fs );

MODULE_AUTHOR( ME2FS_MODULE_AUTHOR );
MODULE_DESCRIPTION( ME2FS_MODULE_DESC );
MODULE_LICENSE ("GPL");
