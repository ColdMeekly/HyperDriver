#pragma once

union __cr4_t
{
	unsigned __int64 control;
	struct
	{
		unsigned __int64 vme : 1;									 // bit 0
		unsigned __int64 pvi : 1;									 // bit 1
		unsigned __int64 time_stamp_disable : 1;					 // bit 2
		unsigned __int64 debug_extensions : 1;						 // bit 3
		unsigned __int64 page_size_extension : 1;					 // bit 4
		unsigned __int64 physical_address_extension : 1;			 // bit 5
		unsigned __int64 machine_check_enable : 1;					 // bit 6
		unsigned __int64 page_global_enable : 1;					 // bit 7
		unsigned __int64 perf_counter_enable : 1;					 // bit 8
		unsigned __int64 os_fxsave_support : 1;						 // bit 9
		unsigned __int64 os_xmm_exception_support : 1;				 // bit 10
		unsigned __int64 usermode_execution_prevention : 1;			 // bit 11
		unsigned __int64 reserved_0 : 1;							 // bit 12
		unsigned __int64 vmx_enable : 1;							 // bit 13
		unsigned __int64 smx_enable : 1;							 // bit 14
		unsigned __int64 reserved_1 : 1;							 // bit 15
		unsigned __int64 fs_gs_enable : 1;							 // bit 16
		unsigned __int64 pcide : 1;									 // bit 17
		unsigned __int64 os_xsave : 1;								 // bit 18
		unsigned __int64 reserved_2 : 1;							 // bit 19
		unsigned __int64 smep : 1;									 // bit 20
		unsigned __int64 smap : 1;									 // bit 21
		unsigned __int64 protection_key_enable : 1;					 // bit 22
	} bits;
};