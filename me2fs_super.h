/********************************************************************************
	File			: me2fs_super.h
	Description		: Definietion for Super Block
********************************************************************************/
#ifndef	__ME2FS_SUPER_H__
#define	__ME2FS_SUPER_H__


/*
=================================================================================
	Prototype Statement
=================================================================================
*/

/*
=================================================================================
	DEFINES
=================================================================================
*/

/*
==================================================================================
	Management
==================================================================================
*/

/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	< Open Functions >
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
/*
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
	Function	:me2fsMountBlockDev
	Input		:struct file_system_type *fs_type
				 < file system type >
				 int flags
				 < mount flags >
				 const char *dev_name
				 < device name >
				 void *data
				 < user data >
	Output		:void
	Return		:struct dentry*
				 < root dentry >
	Description	:mount me2fs over block device
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
*/
struct dentry *
me2fsMountBlockDev( struct file_system_type *fs_type,
					int flags,
					const char *dev_name,
					void *data );


#endif	// __ME2FS_SUPER_H__
/*
#ifndef	__ME2FS_SUPER_H__
#define	__ME2FS_SUPER_H__










struct dentry *
me2fsMountBlockDev ( struct file_system_type *fs_type, 
					int flags, 
					const char *dev_name, 
					void *data);






#endif
*/
