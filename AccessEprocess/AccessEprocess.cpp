#include <ntifs.h>
#include <wdm.h>

// DriverEntry

extern "C" NTSTATUS
DriverEntry(_In_ PDRIVER_OBJECT DriverObject, _In_ PUNICODE_STRING RegistryPath) {
    UNREFERENCED_PARAMETER(RegistryPath);
    UNREFERENCED_PARAMETER(DriverObject);
    PEPROCESS targetProcess = IoGetCurrentProcess();
    KdPrintEx((DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, "EPROCESS: %p\n", targetProcess));
    return STATUS_SUCCESS;
}