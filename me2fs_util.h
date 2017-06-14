#ifndef __ME2FS_UTIL_H_
#define __ME2FS_UTIL_H_



#define ME2FS_DEBUG

#ifdef  ME2FS_DEBUG
    #define DBGPRINT( msg, args... ) do { printk( KERN_INFO msg, ##args ); } while( 0 )
#else
    #define DBGPRING( msg, args... ) do { } while ( 0 )
#endif

#define ME2FS_ERROR( msg, args... ) do { printk( KERN_ERR msg, ##args); } while(0)



#endif
