
/* public: void __thiscall CGfxLibrary::DestroyWindowCanvas(class CViewPort *) */

void __thiscall CGfxLibrary::DestroyWindowCanvas(CGfxLibrary *this,CViewPort *param_1)

{
                    /* 0x85930  1490  ?DestroyWindowCanvas@CGfxLibrary@@QAEXPAVCViewPort@@@Z */
  if (param_1 != (CViewPort *)0x0) {
    CViewPort::~CViewPort(param_1);
    operator_delete(param_1);
  }
  return;
}

