
void __cdecl FUN_3607a4f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_4;
  
  if ((CTexParams *)*param_1 != _tpGlobal) {
    FUN_3607a2a0(&local_4,_tpGlobal);
    piVar3 = param_1;
    if (param_1[2] != 0) {
      if ((param_1 == (int *)0x2700) || (param_1 == (int *)0x2702)) {
        piVar3 = (int *)0x2600;
      }
      else if ((param_1 == (int *)0x2701) || (param_1 == (int *)0x2703)) {
        piVar3 = (int *)0x2601;
      }
    }
    (*DAT_362c41a4)(0xde1,0x2800,local_4);
    (*DAT_362c41a4)(0xde1,0x2801,piVar3);
    *param_1 = (int)_tpGlobal;
  }
  if ((param_1[1] != DAT_362c556c) || (DAT_362a3ffc != DAT_362c53e8)) {
    if (DAT_362c53e8 != 0) {
      DAT_362c53e8 = 1;
    }
    param_1[1] = DAT_362c556c;
    DAT_362a3ffc = DAT_362c53e8;
    if (1 < *(int *)(_pGfx + 0xaec)) {
      iVar1 = param_1[1];
      if ((param_1[2] != 0) && (DAT_362c53e8 == 0)) {
        iVar1 = 1;
      }
      (*DAT_362c41a4)(0xde1,0x84fe,iVar1);
    }
  }
  if ((param_1[3] != (&DAT_362c5574)[DAT_362c44d4 * 5]) ||
     (param_1[4] != (&DAT_362c5578)[DAT_362c44d4 * 5])) {
    iVar1 = ((&DAT_362c5574)[DAT_362c44d4 * 5] == 0x51) + 0x2900;
    iVar2 = ((&DAT_362c5578)[DAT_362c44d4 * 5] == 0x51) + 0x2900;
    if ((*(uint *)(_pGfx + 0xa54) & 0x100000) != 0) {
      if (iVar1 == 0x2900) {
        iVar1 = 0x812f;
      }
      if (iVar2 == 0x2900) {
        iVar2 = 0x812f;
      }
    }
    (*DAT_362c41a4)(0xde1,0x2802,iVar1);
    (*DAT_362c41a4)(0xde1,0x2803,iVar2);
    param_1[3] = (&DAT_362c5574)[DAT_362c44d4 * 5];
    param_1[4] = (&DAT_362c5578)[DAT_362c44d4 * 5];
  }
  DAT_362c4474 = param_1;
  return;
}

