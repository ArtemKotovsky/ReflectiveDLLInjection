#pragma once

enum LoadLibrarySourceType
{
    kKernel32Dll,
    kKernelBaseDll
};

inline const char* LoadLibrarySourceToString(LoadLibrarySourceType source)
{
    switch (source)
    {
    case kKernel32Dll:
        return "kernel32.dll";
    case kKernelBaseDll:
        return "KernelBase.dll";
    default:
        return "Unknown!";
    }
}
