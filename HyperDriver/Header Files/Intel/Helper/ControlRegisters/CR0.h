#pragma once

union __cr0_t
{
	unsigned __int64 control;
	struct
	{
		unsigned __int64 protection_enable : 1;
		unsigned __int64 monitor_coprocessor : 1;
		unsigned __int64 emulate_fpu : 1;
		unsigned __int64 task_switched : 1;
		unsigned __int64 extension_type : 1;
		unsigned __int64 numeric_error : 1;
		unsigned __int64 reserved_0 : 10;
		unsigned __int64 write_protection : 1;
		unsigned __int64 reserved_1 : 1;
		unsigned __int64 alignment_mask : 1;
		unsigned __int64 reserved_2 : 10;
		unsigned __int64 not_write_through : 1;
		unsigned __int64 cache_disable : 1;
		unsigned __int64 paging_disable : 1;
	} bits;
};