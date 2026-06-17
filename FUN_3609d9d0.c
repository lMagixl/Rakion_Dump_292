
uint __thiscall FUN_3609d9d0(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 4) != 0) && (*(int *)(*(int *)((int)this + 4) + 0xc) != 0)) {
    uVar2 = 0;
    if (0 < (int)param_2) {
      do {
        iVar1 = (*DAT_362c9fd8)(*(undefined4 *)(*(int *)((int)this + 4) + 0xc),param_1,
                                param_2 - uVar2,0,2,1,&DAT_362a51a0);
        if (iVar1 < 1) {
          return uVar2;
        }
        uVar2 = uVar2 + iVar1;
        param_1 = (undefined4 *)((int)param_1 + iVar1);
      } while ((int)uVar2 < (int)param_2);
    }
    return uVar2;
  }
  if ((*(int *)this != 0) && (iVar1 = *(int *)(*(int *)this + 8), iVar1 != 0)) {
    uVar2 = (*DAT_362c9fb8)(iVar1,param_1,param_2);
    return uVar2;
  }
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return param_2;
}

