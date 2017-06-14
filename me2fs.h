#ifndef __ME2FS_H_
#define __ME2FS_H_


static struct dentry *me2fs_mount( struct file_system_type *fs_type,
                                  int flags,
                                  const char *dev_name,
                                  void *data );


#endif
