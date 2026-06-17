
/* private: int __thiscall CGfxLibrary::SetCurrentViewport_D3D(class CViewPort *) */

int __thiscall CGfxLibrary::SetCurrentViewport_D3D(CGfxLibrary *this,CViewPort *param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  undefined4 uVar3;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  undefined4 local_14;
  tagRECT local_10;
  
                    /* 0x74710  3425  ?SetCurrentViewport_D3D@CGfxLibrary@@AAEHPAVCViewPort@@@Z */
  CDisplayMode::CDisplayMode((CDisplayMode *)&local_1c);
  local_1c = *(int *)(this + 0xa3c);
  local_18 = *(int *)(this + 0xa40);
  local_14 = *(undefined4 *)(this + 0xa44);
  GetClientRect(*(HWND *)param_1,&local_10);
  if ((local_1c == local_10.right - local_10.left) && (local_18 == local_10.bottom - local_10.top))
  {
    *(CViewPort **)(this + 0xa30) = param_1;
    if (((byte)this[0xa54] & 2) != 0) {
      InitContext_D3D(this);
    }
    *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) & 0xfffffffd;
    return 1;
  }
  if ((*(uint *)(this + 0xa54) & 2) != 0) {
    *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    CViewPort::CloseCanvas(param_1);
    CViewPort::OpenCanvas(param_1);
    *(CViewPort **)(this + 0xa30) = param_1;
    InitContext_D3D(this);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(this + 0xa50);
    return 1;
  }
  if (*(int *)(param_1 + 0x84) < *(int *)(this + 0xa50)) {
    CViewPort::CloseCanvas(param_1);
    CViewPort::OpenCanvas(param_1);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(this + 0xa50);
  }
  else {
    if ((*(int **)(this + 0xa30) != (int *)0x0) && (**(int **)(this + 0xa30) == *(int *)param_1)) {
      return 1;
    }
    uVar3 = 0;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x10))(*(int **)(param_1 + 0x7c),0,0,local_20)
    ;
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(this + 0xa5c) + 0x7c))
                      (*(int **)(this + 0xa5c),uVar3,*(undefined4 *)(param_1 + 0x80));
    do {
      iVar2 = (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    } while (0 < iVar2);
    if (iVar1 != 0) {
      return 0;
    }
  }
  *(CViewPort **)(this + 0xa30) = param_1;
  return 1;
}

