#include <Python.h>
#ifdef _WIN32
#include "windows.h"
#endif
int
main(int argc, wchar_t* argv[])
{
  Py_SetProgramName(argv[0]);  /* optional but recommended */
  Py_Initialize();
  Py_Finalize();
  return 0;
}
