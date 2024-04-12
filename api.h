#pragma once

struct KernelConfig {
  virtual void configure() = 0;
  virtual ~KernelConfig() = default;
};
