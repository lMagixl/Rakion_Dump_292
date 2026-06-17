
/* private: int __thiscall CGfxLibrary::SetCurrentViewport_OGL(class CViewPort *) */

int __thiscall CGfxLibrary::SetCurrentViewport_OGL(CGfxLibrary *this,CViewPort *param_1)

{
  int *piVar1;
  int iVar2;
  HDC__ **ppHVar3;
  HDC__ *local_24 [2];
  HDC__ *local_1c [2];
  HDC__ *apHStack_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x7a0d0  3426  ?SetCurrentViewport_OGL@CGfxLibrary@@AAEHPAVCViewPort@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211f42;
  local_c = ExceptionList;
  if ((*(uint *)(this + 0xa54) & 2) == 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x84) < *(int *)(this + 0xa50)) {
      ExceptionList = &local_c;
      CViewPort::CloseCanvas(param_1);
      CViewPort::OpenCanvas(param_1);
      FUN_3609c160(local_1c,*(HWND *)param_1);
      local_4 = 1;
      iVar2 = SetupPixelFormat_OGL(this,local_1c[0],0);
      ppHVar3 = local_1c;
      local_4 = 0xffffffff;
      if (iVar2 == 0) goto LAB_3607a25a;
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(this + 0xa50);
      FUN_3609c180(ppHVar3);
    }
    piVar1 = *(int **)(this + 0xa30);
    if (piVar1 != (int *)0x0) {
      if ((((*(uint *)(this + *(int *)(this + 0xa48) * 0x144 + 0x134) & 1) != 0) && (*piVar1 != 0))
         && (*piVar1 != *(int *)param_1)) {
        ExceptionList = local_c;
        return 0;
      }
      if (*piVar1 == *(int *)param_1) {
        ExceptionList = local_c;
        return 1;
      }
    }
    (*DAT_362c443c)(0,0);
    FUN_3609c160(local_1c,*(HWND *)param_1);
    local_c = (void *)0x2;
    iVar2 = (*DAT_362c443c)(local_1c[0],*(undefined4 *)(this + 0xac4));
    ppHVar3 = apHStack_14;
    if (iVar2 == 0) {
LAB_3607a25a:
      local_4 = 0xffffffff;
      FUN_3609c180(ppHVar3);
      ExceptionList = local_c;
      return 0;
    }
    *(CViewPort **)(this + 0xa30) = param_1;
  }
  else {
    ExceptionList = &local_c;
    *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) & 0xfffffffd;
    CViewPort::CloseCanvas(param_1);
    CViewPort::OpenCanvas(param_1);
    FUN_3609c160(local_24,*(HWND *)param_1);
    local_4 = 0;
    iVar2 = CreateContext_OGL(this,local_24[0]);
    if (iVar2 == 0) {
      local_4 = 0xffffffff;
      FUN_3609c180(local_24);
      ExceptionList = local_c;
      return 0;
    }
    *(CViewPort **)(this + 0xa30) = param_1;
    InitContext_OGL(this);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(this + 0xa50);
    ppHVar3 = local_24;
  }
  local_4 = 0xffffffff;
  FUN_3609c180(ppHVar3);
  ExceptionList = local_c;
  return 1;
}

