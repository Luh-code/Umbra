#ifndef __UMBRA_API_HPP__
#define __UMBRA_API_HPP__

#include <HexBase/adapter.hpp>
#include <HexBase/port.hpp>
#include <HexBase/module.hpp>

namespace Umbra
{
  class ApiModule : public HexBase::Module
  {

  };

  class ApiPort : public HexBase::Port<ApiModule>
  {
  public:
    inline ApiPort(ApiModule* module)
    {
      this->module = module;
    };
  };

  class ApiAdapter : public HexBase::Adapter<ApiPort>
  {

  };

  class NativeApiAdapter : public ApiAdapter
  {
  public:
    virtual inline void test(int32_t* result) override
    {
      result = 0;
    }
  };
}

#endif /* end of include guard: __UMBRA_API_HPP__ */
