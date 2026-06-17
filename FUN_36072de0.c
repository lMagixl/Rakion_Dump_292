
void __cdecl FUN_36072de0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = *(int **)(_pGfx + 0xa5c);
  uVar3 = 0x208;
  if ((*(uint *)(_pGfx + 0xa54) & 0x800) == 0) {
    uVar3 = 0x218;
  }
  if ((0 < *(int *)(_pGfx + 0xaf0)) && (0 < DAT_362a40f4)) {
    uVar3 = uVar3 | 0x100;
  }
  if (0 < *(int *)(_pGfx + 0xaac)) {
    do {
      iVar2 = (**(code **)(**(int **)(_pGfx + 0xaa4) + 8))(*(int **)(_pGfx + 0xaa4));
    } while (0 < iVar2);
    *(undefined4 *)(_pGfx + 0xaa4) = 0;
  }
  if (param_1 < 1) {
    *(undefined4 *)(_pGfx + 0xaac) = 0;
    DAT_362c3ccc = 0;
    return;
  }
  iVar2 = *(int *)(_pGfx + 0xaac);
  if (iVar2 < param_1) {
    *(int *)(_pGfx + 0xaac) = param_1;
    iVar2 = param_1;
  }
  (**(code **)(*piVar1 + 0x60))(piVar1,iVar2 * 2,uVar3,0x65,0,_pGfx + 0xaa4);
  (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x154))
            (*(int **)(_pGfx + 0xa5c),*(undefined4 *)(_pGfx + 0xaa4),0);
  DAT_362c3ccc = 0;
  return;
}

