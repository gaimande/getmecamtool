/*

  TODO: Header goes here 

*/
#ifndef __COMMON_H
#define __COMMON_H

// Web UI related constants
#define WEBUI_ENTRY_TYPE_FIELD_LEN 1
#define WEBUI_ENTRY_NAME_SIZE_FIELD_LEN 4

#define WEBUI_FENTRY_SIZE_FIELD_LEN 4

#define WEBUI_FENTRY_MAX_SIZE (WEBUI_ENTRY_NAME_SIZE_FIELD_LEN + MAX_PATH_LEN + WEBUI_ENTRY_TYPE_FIELD_LEN + WEBUI_FENTRY_SIZE_FIELD_LEN + MAX_FILE_SIZE)
#define WEBUI_DENTRY_MAX_SIZE (WEBUI_ENTRY_NAME_SIZE_FILED_LEN + MAX_PATH_LEN + WEBUI_ENTRY_TYPE_FIELD_LEN)

#define DEFAULT_PATH "./"
#define DEFAULT_FILE "./out.txt"
#define WEBUI_MAGIC  0x440C9ABD
#define SYS_MAGIC    0x47454E42
#define CONF_MAGIC   0x440C9ABD
#define SYS_RESERVED 0x00000001

extern const int32_t ui_header_field[];
extern const int32_t sys_header_field[];
extern const int32_t conf_header_field[];
extern const int32_t conf_sections_field[];

typedef enum {
	UI_OFFSET_SIZE_v1 = 0,
	UI_OFFSET_VERSION_v1,
	UI_OFFSET_DESC,
	UI_OFFSET_FIRST_FILE_v1,
	UI_OFFSET_MAGIC,
	UI_OFFSET_CHECKSUM,
	UI_OFFSET_SIZE_v2,
	UI_OFFSET_VERSION_v2,
	UI_OFFSET_FIRST_FILE_v2
} ui_header_offset_t;

typedef enum {
	SYS_OFFSET_MAGIC = 0,
	SYS_OFFSET_RESERVE1,
	SYS_OFFSET_RESERVE2,
	SYS_OFFSET_SIZE_LINUX_BIN,
	SYS_OFFSET_SIZE_ROMFS
} sys_header_offset_t;

typedef enum {
	UI_TYPE_FILENAME_SIZE = 0,
	UI_TYPE_FILENAME,
	UI_TYPE_ENTRY_TYPE,
	UI_TYPE_FILE_SIZE,
	UI_TYPE_FILE
} ui_entry_data_type_t;

typedef enum {
  CONF_OFFSET_MAGIC = 0,
	CONF_OFFSET_CHECKSUM,
	CONF_OFFSET_RESERVE,
	CONF_OFFSET_CAMID,
	CONF_OFFSET_SYS_VER,
  CONF_OFFSET_UI_VER,
  CONF_OFFSET_ALIAS
} conf_header_offset_t;

typedef enum {
  CONF_OFFSET_USERS = 0,
  CONF_OFFSET_NETWORK,
  CONF_OFFSET_ADSL,
  CONF_OFFSET_WIFI
} conf_sections_offset_t;
//Function definitions

#endif				/* // __COMMON_H */
