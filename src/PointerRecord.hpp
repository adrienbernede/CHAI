#ifndef CHAI_PointerRecord_HPP
#define CHAI_PointerRecord_HPP

namespace chai {

struct PointerRecord 
{
  void * m_pointer;

  size_t m_size;

  bool m_host_touched;
  bool m_device_touched;
};

}

#endif
