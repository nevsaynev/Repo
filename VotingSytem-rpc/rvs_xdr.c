/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "rvs.h"

bool_t
xdr_vote (XDR *xdrs, vote *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->can_name, MAX_NAME,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->voter_id))
		 return FALSE;
	return TRUE;
}