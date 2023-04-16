#include "Umbra/application.hpp"

int main()
{
  Umbra::UmbraApplication app {};
  Umbra::NativeApiAdapter apiAdapter {};
  app.mountApiAdapter(&apiAdapter);

  return 0;
}
