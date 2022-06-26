// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include "msgspec.h"

int
ofix_msg_spec_tag_seq(ofixMsgSpec spec, int tag) {
    if (0 < tag && tag < OFIX_TAG_SEQ_ARRAY_SIZE) {
	return spec->tag_seq[tag];
    } else {
	ofixTagReq	tr;
	int		seq;

	for (seq = 1, tr = spec->tags; 0 != tr->tag; seq++, tr++) {
	    if (tag == tr->tag) {
		return seq;
	    }
	}
    }
    return 0;
}
