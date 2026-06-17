
int __thiscall FUN_361db4b6(void *this,int *param_1)

{
  BITMAPINFO *lpbmi;
  int iVar1;
  HDC hdc;
  HBITMAP pHVar2;
  HGDIOBJ pvVar3;
  BITMAPINFO *pBVar4;
  undefined1 local_e8 [12];
  uint local_dc;
  undefined1 local_14 [16];
  
  *(void **)((int)this + 0xac) = DAT_36383c5c;
  DAT_36383c5c = this;
  *(int **)((int)this + 4) = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  (**(code **)(**(int **)((int)this + 4) + 0x1c))(*(int **)((int)this + 4),local_e8);
  (**(code **)(**(int **)((int)this + 4) + 0x24))(*(int **)((int)this + 4),local_14);
  *(uint *)((int)this + 0x50) = local_dc & 0x20000000;
  *(undefined4 *)((int)this + 0x58) = 0x40;
  *(undefined4 *)((int)this + 0x5c) = 0x10;
  *(undefined4 *)((int)this + 0x54) = 0x15;
  iVar1 = FUN_361db3cd((int)this);
  if ((-1 < iVar1) &&
     (iVar1 = FUN_361c0d25(*(int **)((int)this + 4),(undefined4 *)((int)this + 0xc)), -1 < iVar1)) {
    lpbmi = (BITMAPINFO *)((int)this + 0x70);
    pBVar4 = lpbmi;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      (pBVar4->bmiHeader).biSize = 0;
      pBVar4 = (BITMAPINFO *)&(pBVar4->bmiHeader).biWidth;
    }
    (lpbmi->bmiHeader).biSize = 0x28;
    *(undefined4 *)((int)this + 0x74) = 0x100;
    *(undefined4 *)((int)this + 0x78) = 0x100;
    *(undefined2 *)((int)this + 0x7c) = 1;
    *(undefined4 *)((int)this + 0x80) = 0;
    *(undefined2 *)((int)this + 0x7e) = 0x20;
    *(undefined4 *)((int)this + 0xa4) = 0x15;
    hdc = CreateCompatibleDC((HDC)0x0);
    *(HDC *)((int)this + 0x6c) = hdc;
    if (hdc != (HDC)0x0) {
      *(int *)((int)this + 0x78) = -*(int *)((int)this + 0x78);
      pHVar2 = CreateDIBSection(hdc,lpbmi,0,(void **)((int)this + 0xa0),(HANDLE)0x0,0);
      *(HBITMAP *)((int)this + 0x98) = pHVar2;
      if (pHVar2 != (HBITMAP)0x0) {
        *(int *)((int)this + 0x78) = -*(int *)((int)this + 0x78);
        SetBkMode(*(HDC *)((int)this + 0x6c),2);
        SetBkColor(*(HDC *)((int)this + 0x6c),0);
        SetTextColor(*(HDC *)((int)this + 0x6c),0xffffff);
        pvVar3 = SelectObject(*(HDC *)((int)this + 0x6c),*(HGDIOBJ *)((int)this + 0x98));
        *(HGDIOBJ *)((int)this + 0x9c) = pvVar3;
        return 0;
      }
    }
    iVar1 = -0x7ff8fff2;
  }
  return iVar1;
}

