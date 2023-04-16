#ifndef __UMBRA_APPLICATION_HPP__
#define __UMBRA_APPLICATION_HPP__

#include <HexBase/application.hpp>
#include "../api.hpp"

namespace Umbra
{
  class UmbraApplication : public HexBase::Application
  {
  public:
    ApiModule apiModule;

    ApiPort apiPort { &apiModule };

  public:
    inline void mountApiAdapter(ApiAdapter* adapter)
    {
      evaluateAdapter(adapter, &apiPort);
    }
  };
}

#endif /* end of include guard: __UMBRA_APPLICATION_HPP__ */
