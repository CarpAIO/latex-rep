
// Copyright 2009, 2015, 2015 by Peter Ohler, All Rights Reserved

#include <arpa/inet.h>
#include <netdb.h>

#include "private.h"

uint32_t
_ofix_net_addr(ofixErr err, const char *host) {
    struct hostent	*h;

    h = gethostbyname(host);
    if (0 == h || h->h_length <= 0) {
	struct in_addr	in_addr;
	
	if (0 == inet_aton(host, &in_addr)) {
	    // inet_aton is the reverse of most functions and returns 0 for failure
	    if (NULL != err) {
		err->code = OFIX_NETWORK_ERR;
		snprintf(err->msg, sizeof(err->msg),
			 "Failed to resolved host '%s'", (NULL == host ? "<null>" : host));
	    }
	    return 0;
	}
	return in_addr.s_addr;
    }
    //printf("*** addrtype = %d\n", h->h_addrtype);
    if (AF_INET == h->h_addrtype) {
	uint32_t	a = 0;
	int		i;
	uint8_t		*c = (uint8_t*)*h->h_addr_list;

	for (i = 0; i < 4; i++) {
	    a = (a << 8) | *c++;
	}
	return a;
    }
    if (NULL != err) {
	err->code = OFIX_NETWORK_ERR;
	snprintf(err->msg, sizeof(err->msg),
		 "Failed to resolved host '%s'", (NULL == host ? "<null>" : host));
    }
    return 0;
}
