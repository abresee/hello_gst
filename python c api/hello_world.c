#include <Python.h>
#include <windows.h>

int
main(int argc, wchar_t *argv[])
{
  Py_SetProgramName(argv[0]);  /* optional but recommended */
  Py_Initialize();
  Py_Finalize();
  return 0;
}