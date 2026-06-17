
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_36074ac0(int param_1)

{
  int *piVar1;
  int *piVar2;
  CGfxLibrary *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_EDI;
  int iVar7;
  
  pCVar3 = _pGfx;
  iVar7 = DAT_362c4560;
  iVar6 = DAT_362c3c9c;
  iVar5 = DAT_362c3ca0;
  if (*(int *)(_pGfx + 0xab4) <= DAT_362c3ca0) {
    iVar5 = DAT_362c3ca0 % *(int *)(_pGfx + 0xab4);
  }
  DAT_362c3ca0 = DAT_362c3ca0 + 1;
  iVar4 = DAT_362c44d4 + 2;
  *(undefined4 *)(&DAT_362c3c18 + iVar5 * 4) = 0x1000;
  _DAT_362c3cbc = param_1;
  if (param_1 == 0) {
    iVar7 = iVar7 << 3;
    iVar6 = iVar6 << 3;
    param_1 = 8;
  }
  else {
    iVar7 = iVar7 << 4;
    iVar6 = iVar6 << 4;
    param_1 = 0x10;
  }
  piVar1 = *(int **)(pCVar3 + iVar5 * 4 + 0xa8c);
  DAT_362c3cb4 = DAT_362c3cb4 | 1 << ((byte)iVar4 & 0x1f);
  piVar2 = *(int **)(pCVar3 + 0xa5c);
  (**(code **)(*piVar2 + 0x14c))(piVar2,iVar4,piVar1,param_1);
  (**(code **)(*piVar1 + 0x2c))(piVar1,iVar6,iVar7,&stack0xfffffff4,unaff_EDI);
  DAT_362c3ce0 = piVar1;
  return iVar4;
}

