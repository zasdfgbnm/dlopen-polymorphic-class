#include <dlfcn.h>
#include <memory>
#include <cassert>
#include "api.h"

int main() {
    void* handle = dlopen("./libplugin.so", RTLD_LAZY);
    assert(handle);
    auto makeConfig = (std::unique_ptr<KernelConfig>(*)())dlsym(handle, "makeConfig");
    assert(makeConfig);
    auto cfg = makeConfig();
    cfg->configure();
}
