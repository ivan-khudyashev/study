#ifndef _COMMONHEADER_H_
#define _COMMONHEADER_H_
typedef struct yy_buffer_state* YY_BUFFER_STATE;
extern YY_BUFFER_STATE yy_scan_string(char*);
extern void yy_delete_buffer(YY_BUFFER_STATE);
#endif
