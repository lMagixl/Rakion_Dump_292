
/* public: class CDisplayMode * __thiscall CGfxLibrary::EnumDisplayModes(long &,enum
   GfxAPIType,long) */

CDisplayMode * __thiscall
CGfxLibrary::EnumDisplayModes(CGfxLibrary *this,long *param_1,GfxAPIType param_2,long param_3)

{
                    /* 0x85970  1574
                       ?EnumDisplayModes@CGfxLibrary@@QAEPAVCDisplayMode@@AAJW4GfxAPIType@@J@Z */
  if (param_2 == 9) {
    param_2 = *(GfxAPIType *)(this + 0xa38);
  }
  if (param_3 == 0) {
    param_3 = *(long *)(this + 0xa48);
  }
  *param_1 = *(long *)(this + param_3 * 0x144 + 300 + param_2 * 0x518);
  return (CDisplayMode *)(this + param_3 * 0x144 + param_2 * 0x518);
}

