#include <memory>
#include "api.h"
#include <iostream>

struct MyKernelConfig : public KernelConfig {
  virtual void configure() override {
    std::cout << "MyKernelConfig::configure()" << std::endl;
  }
};

extern "C" std::unique_ptr<KernelConfig> makeConfig() {
  return std::unique_ptr<KernelConfig>(new MyKernelConfig);
}
