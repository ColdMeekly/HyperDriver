#include <ntddk.h>
#include <stdarg.h>
#include <Intel/Helper/cpuid.h>

NTSTATUS
DriverEntry(
    PDRIVER_OBJECT DriverObject,
    PUNICODE_STRING RegistryPath
)
{
    UNREFERENCED_PARAMETER(DriverObject);
    UNREFERENCED_PARAMETER(RegistryPath);

    DbgPrint("%s - Output Test from HyperDriver.\n", __FUNCTION__);

    return STATUS_SUCCESS;
}

INT
VmHasCpuidSupport(
    void
)
{
    union __cpuid_t cpuid = { 0 };
    __cpuid(cpuid.cpu_info, 1);

    return cpuid.feature_ecx.virtual_machine_extensions;
}

VOID
DbgLog(
    int error_level,
    const char* fmt,
    ...
)
{
    va_list args;
    va_start(args, fmt);
    // DPFLTR_ERROR_LEVEL
    vDbgPrintExWithPrefix("[*] ", DPFLTR_IHVDRIVER_ID, error_level, fmt, args);

    va_end(args);
}