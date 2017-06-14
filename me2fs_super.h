#ifndef __ME2FS_SUPER_H_
#define __ME2FS_SUPER_H_


struct dentry *me2fsMountBlockDev ( struct file_system_type *fs_type, int flags, const char *dev_name, void *data);

#endif
