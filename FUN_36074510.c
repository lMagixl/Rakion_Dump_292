
void __cdecl FUN_36074510(uint param_1,ushort *param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  uint local_14;
  int local_10;
  ushort *local_8;
  
  piVar1 = *(int **)(_pGfx + 0xa5c);
  if (2 < (int)param_1) {
    if (*(int *)(_pGfx + 0xaf8) * 3 < (int)param_1) {
      param_1 = *(int *)(_pGfx + 0xaf8) * 3;
    }
    if (*(int *)(_pGfx + 0xaac) < (int)param_1) {
      FUN_36072de0(param_1);
    }
    uVar4 = 0x1000;
    if (*(int *)(_pGfx + 0xaac) <= (int)(DAT_362c3ccc + param_1)) {
      DAT_362c3ccc = 0;
      uVar4 = 0x2000;
    }
    local_10 = DAT_362c4560;
    bVar2 = false;
    local_14 = 0;
    if ((*(uint *)(_pGfx + 0xa54) & 0x800) == 0) {
      if (DAT_362a40c4 < 0) {
        DAT_362a40c4 = 0;
      }
      else if (9999 < DAT_362a40c4) {
        DAT_362a40c4 = 9999;
      }
      bVar2 = DAT_362a40c4 < DAT_362c4560;
    }
    (**(code **)(**(int **)(_pGfx + 0xaa4) + 0x2c))
              (*(int **)(_pGfx + 0xaa4),DAT_362c3ccc * 2,param_1 * 2,&local_8,uVar4);
    puVar7 = param_2;
    for (uVar5 = param_1 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_8 = *(undefined4 *)puVar7;
      puVar7 = puVar7 + 2;
      local_8 = local_8 + 2;
    }
    if ((param_1 & 1) != 0) {
      *local_8 = *puVar7;
    }
    if (bVar2) {
      local_14 = 0x10000;
      uVar6 = 0;
      uVar5 = param_1;
      do {
        uVar3 = (uint)*param_2;
        if (uVar3 < local_14) {
          local_14 = uVar3;
        }
        if (uVar6 < uVar3) {
          uVar6 = uVar3;
        }
        param_2 = param_2 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      local_10 = (uVar6 - local_14) + 1;
    }
    (**(code **)(**(int **)(_pGfx + 0xaa4) + 0x30))(*(int **)(_pGfx + 0xaa4));
    if (DAT_362a4024 != 0) {
      if (DAT_362c44cc == 0) {
        DAT_362c3cb4 = DAT_362c3cb4 & 0xfffffffd;
      }
      else {
        DAT_362c3cb4 = DAT_362c3cb4 | 2;
      }
    }
    FUN_36074470();
    if ((DAT_362a4024 != 0) && (*(int *)(_pGfx + 0xabc) != DAT_362c3ca8)) {
      DAT_362c3cb0 = 0;
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x130))(*(int **)(_pGfx + 0xa5c),DAT_362c3ca8);
      *(int *)(_pGfx + 0xabc) = DAT_362c3ca8;
    }
    if (DAT_362c44e4 == 0) {
      (*DAT_362c46dc)(0);
    }
    (**(code **)(*piVar1 + 0x11c))(piVar1,4,local_14,local_10,DAT_362c3ccc,(int)param_1 / 3);
    DAT_362c3ccc = DAT_362c3ccc + param_1;
  }
  return;
}

