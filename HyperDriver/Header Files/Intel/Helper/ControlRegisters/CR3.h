#pragma once

union __cr3_t
{
	unsigned __int64 control;
	struct
	{
		unsigned __int64 pcid : 12;
		unsigned __int64 page_frame_number : 36;
		unsigned __int64 reserved_0 : 12;
		unsigned __int64 reserved_1 : 3;
		unsigned __int64 pcid_invalidate : 1;
	} bits;
};