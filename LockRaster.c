
/* public: int __thiscall CGfxLibrary::LockRaster(class CRaster *) */

int __thiscall CGfxLibrary::LockRaster(CGfxLibrary *this,CRaster *param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x859b0  2569  ?LockRaster@CGfxLibrary@@QAEHPAVCRaster@@@Z */
  uVar1 = SetCurrentViewport(this,*(CViewPort **)(param_1 + 4));
  if (uVar1 != 0) {
    if ((*(int *)(this + 0xa38) == 1) && (DAT_362c4d80 == 0)) {
      iVar2 = (**(code **)(**(int **)(this + 0xa5c) + 0x88))(*(int **)(this + 0xa5c));
      uVar1 = (uint)(iVar2 == 0);
    }
    DAT_362c4d80 = 1;
  }
  return uVar1;
}

