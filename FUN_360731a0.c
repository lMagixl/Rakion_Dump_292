
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360731a0(int param_1)

{
  int *piVar1;
  int iVar2;
  CGfxLibrary *pCVar3;
  CGfxLibrary *pCVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 < 0x10000) {
    if (param_1 == 0) goto LAB_360731d5;
  }
  else {
    param_1 = 0xffff;
  }
  if (param_1 <= *(int *)(_pGfx + 0xaa8)) {
    return;
  }
LAB_360731d5:
  piVar1 = *(int **)(_pGfx + 0xa5c);
  if (*(int *)(_pGfx + 0xa68) != 0) {
    iVar5 = 0;
    if (0 < *(int *)(_pGfx + 0xab8)) {
      do {
        (**(code **)(*piVar1 + 0x14c))(piVar1,iVar5,0,0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(_pGfx + 0xab8));
    }
    do {
      iVar5 = (**(code **)(**(int **)(_pGfx + 0xa68) + 8))(*(int **)(_pGfx + 0xa68));
    } while (0 < iVar5);
    *(undefined4 *)(_pGfx + 0xa68) = 0;
    do {
      iVar5 = (**(code **)(**(int **)(_pGfx + 0xa6c) + 8))(*(int **)(_pGfx + 0xa6c));
    } while (0 < iVar5);
    *(undefined4 *)(_pGfx + 0xa6c) = 0;
    do {
      iVar5 = (**(code **)(**(int **)(_pGfx + 0xa70) + 8))(*(int **)(_pGfx + 0xa70));
    } while (0 < iVar5);
    *(undefined4 *)(_pGfx + 0xa70) = 0;
    iVar5 = 0;
    if (0 < *(int *)(_pGfx + 0xab0)) {
      iVar6 = 0xa74;
      do {
        do {
          iVar2 = (**(code **)(**(int **)(_pGfx + iVar6) + 8))(*(int **)(_pGfx + iVar6));
        } while (0 < iVar2);
        *(undefined4 *)(_pGfx + iVar6) = 0;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < *(int *)(_pGfx + 0xab0));
    }
    iVar5 = 0;
    if (0 < *(int *)(_pGfx + 0xab4)) {
      iVar6 = 0xa8c;
      do {
        do {
          iVar2 = (**(code **)(**(int **)(_pGfx + iVar6) + 8))(*(int **)(_pGfx + iVar6));
        } while (0 < iVar2);
        *(undefined4 *)(_pGfx + iVar6) = 0;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < *(int *)(_pGfx + 0xab4));
    }
  }
  if (param_1 < 1) {
    *(undefined4 *)(_pGfx + 0xaa8) = 0;
  }
  else {
    iVar5 = *(int *)(_pGfx + 0xaa8);
    if (iVar5 < param_1) {
      *(int *)(_pGfx + 0xaa8) = param_1;
      iVar5 = param_1;
    }
    uVar7 = 0x208;
    if ((*(uint *)(_pGfx + 0xa54) & 0x800) == 0) {
      uVar7 = 0x218;
    }
    if ((0 < *(int *)(_pGfx + 0xaf0)) && (0 < DAT_362a40f4)) {
      uVar7 = uVar7 | 0x100;
    }
    (**(code **)(*piVar1 + 0x5c))(piVar1,iVar5 * 0xc,uVar7,0,0,_pGfx + 0xa68);
    pCVar3 = _pGfx + 0xa6c;
    (**(code **)(*piVar1 + 0x5c))(piVar1,iVar5 * 0xc,uVar7,0,0,pCVar3);
    pCVar4 = _pGfx + 0xa70;
    (**(code **)(*piVar1 + 0x5c))(piVar1,(int)pCVar3 * 8,uVar7,0,0,pCVar4);
    iVar5 = 0;
    if (0 < *(int *)(_pGfx + 0xab0)) {
      iVar6 = 0xa74;
      do {
        (**(code **)(*piVar1 + 0x5c))(piVar1,(int)pCVar4 << 2,uVar7,0,0,_pGfx + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < *(int *)(_pGfx + 0xab0));
    }
    iVar5 = 0;
    if (0 < *(int *)(_pGfx + 0xab4)) {
      iVar6 = 0xa8c;
      do {
        (**(code **)(*piVar1 + 0x5c))
                  (piVar1,((uint)(iVar5 == 0) * 8 + 8) * (int)pCVar4,uVar7,0,0,_pGfx + iVar6);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < *(int *)(_pGfx + 0xab4));
    }
  }
  *(undefined4 *)(_pGfx + 0xabc) = 0;
  *(undefined4 *)(_pGfx + 0xac0) = 0;
  DAT_362c3ce0 = 0;
  DAT_362c3cdc = 0;
  DAT_362c3cd8 = 0;
  DAT_362c3cd4 = 0;
  DAT_362c3cd0 = 0;
  _DAT_362c3cc8 = 0;
  _DAT_362c3cc4 = 0;
  _DAT_362c3cc0 = 0;
  _DAT_362c3cbc = 0;
  DAT_362c3cb8 = 0;
  DAT_362c3cb4 = 0;
  DAT_362c3c98 = 0;
  DAT_362c3c48 = 0x2000;
  _DAT_362c3c44 = 0x2000;
  _DAT_362c3c40 = 0x2000;
  _DAT_362c3c3c = 0x2000;
  _DAT_362c3c38 = 0x2000;
  _DAT_362c3c34 = 0x2000;
  _DAT_362c3c30 = 0x2000;
  _DAT_362c3c2c = 0x2000;
  _DAT_362c3c28 = 0x2000;
  _DAT_362c3c24 = 0x2000;
  _DAT_362c3c20 = 0x2000;
  _DAT_362c3c1c = 0x2000;
  _DAT_362c3c18 = 0x2000;
  return;
}

