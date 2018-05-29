#ifndef BASIC_INSTANCE_WRITER_H
#define BASIC_INSTANCE_WRITER_H

#include "Writer.h"
#include "MyLib.h"
#include <sstream>

class InstanceWriter : public Writer {
public:
  InstanceWriter() {}

  ~InstanceWriter() {}

  int write(const Instance *pInstance) {
    if (!m_outf.is_open()) return -1;

    for (int i = 0; i < pInstance->size(); ++i) {
    }
    m_outf << endl;
    return 0;
  }

  int write(const CResult &result) {
    if (!m_outf.is_open())
      return -1;
	  for (int i = 0; i < result.size(); ++i) {
			
    }
    m_outf << endl;
    return 0;
  }
};

#endif

