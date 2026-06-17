
/* public: int __thiscall CGfxLibrary::SetCurrentViewport(class CViewPort *) */

int __thiscall CGfxLibrary::SetCurrentViewport(CGfxLibrary *this,CViewPort *param_1)

{
  int iVar1;
  
                    /* 0x857c0  3424  ?SetCurrentViewport@CGfxLibrary@@QAEHPAVCViewPort@@@Z */
  iVar1 = *(int *)(this + 0xa38);
  if (iVar1 == 0) {
    iVar1 = SetCurrentViewport_OGL(this,param_1);
    return iVar1;
  }
  if (iVar1 == 1) {
    iVar1 = SetCurrentViewport_D3D(this,param_1);
    return iVar1;
  }
  return (uint)(iVar1 == -1);
}

