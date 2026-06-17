
void __cdecl FUN_36076180(int *param_1)

{
  int *piVar1;
  int iVar2;
  CGfxLibrary *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar2 = DAT_362c44d4;
  piVar1 = *(int **)(_pGfx + 0xa5c);
  if ((CTexParams *)*param_1 != _tpGlobal) {
    *param_1 = (int)_tpGlobal;
  }
  iVar5 = (int)_tpGlobal % 10;
  iVar6 = iVar2 * 0x14;
  if (((param_1[2] == 0) != (*(int *)(&DAT_362c5570 + iVar6) == 0)) && (iVar5 != 0)) {
    if (param_1[2] == 0) {
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      else if (iVar5 == 1) {
        iVar4 = 1;
      }
      else {
        iVar4 = iVar6;
        if (iVar5 == 2) {
          iVar4 = 2;
        }
      }
      (**(code **)(*piVar1 + 0xfc))(piVar1,iVar2,0x12,iVar4);
    }
    else {
      (**(code **)(*piVar1 + 0xfc))(piVar1,iVar2,0x12,0);
    }
    *(int *)(&DAT_362c5570 + iVar6) = param_1[2];
  }
  if (DAT_362c53e8 != 0) {
    DAT_362c53e8 = 1;
  }
  if (param_1[1] != DAT_362c556c) {
    param_1[1] = DAT_362c556c;
    pCVar3 = _pGfx;
    iVar5 = 0;
    if (0 < *(int *)(_pGfx + 0xadc)) {
      do {
        (&DAT_362a3f7c)[iVar5] = 0x4d2;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(pCVar3 + 0xadc));
    }
  }
  iVar5 = 1;
  if ((param_1[1] < 2) || ((param_1[2] != 0 && (DAT_362c53e8 == 0)))) {
    iVar5 = 0;
  }
  if ((&DAT_362a3f7c)[iVar2] != iVar5) {
    (&DAT_362a3f7c)[iVar2] = iVar5;
    if (iVar5 == 0) {
      iVar5 = (int)_tpGlobal / 100;
      if ((int)_tpGlobal / 100 == 0) {
        iVar5 = ((int)_tpGlobal / 10) % 10;
      }
      piVar7 = piVar1;
      (**(code **)(*piVar1 + 0xfc))(piVar1,iVar2,0x15,1);
      iVar6 = 0x10;
      (**(code **)(*piVar1 + 0xfc))(piVar1,iVar2,0x10,iVar5);
    }
    else {
      (**(code **)(*piVar1 + 0xfc))(piVar1,iVar2,0x15,param_1[1]);
      iVar6 = 0x10;
      (**(code **)(*piVar1 + 0xfc))(piVar1,iVar2,0x10,3);
      piVar7 = (int *)0x3;
    }
    (**(code **)(*piVar1 + 0xfc))(piVar1,iVar2,0x11,piVar7);
  }
  if ((param_1[3] != *(int *)((int)&DAT_362c5574 + iVar6)) ||
     (param_1[4] != *(int *)((int)&DAT_362c5578 + iVar6))) {
    param_1[3] = *(int *)((int)&DAT_362c5574 + iVar6);
    param_1[4] = *(int *)((int)&DAT_362c5578 + iVar6);
  }
  DAT_362c3d00 = param_1;
  return;
}

