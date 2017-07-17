#include "cronometer.hpp"
#include <iostream>
int main()
{
  chronometer crono{};

  crono.run();

  std::cout<<" hello world"<<std::endl;

  crono.stop();

  std::cout<<"takes "<<crono.get_time()<<" seconds to say hello world"<<std::endl;

  crono.reset();
}
