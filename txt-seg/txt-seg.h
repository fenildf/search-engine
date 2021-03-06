#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "list/list.h"

struct text_seg {
	char             str[MAX_TXT_SEG_BYTES];
	uint32_t         offset, n_bytes; /* in bytes */
	struct list_node ln;
};

int   text_segment_init(const char *dict_path);
list  text_segment(const char *text);
void  text_segment_free(void);

#ifdef __cplusplus
}
#endif
