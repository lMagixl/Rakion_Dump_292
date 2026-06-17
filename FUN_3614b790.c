
undefined4 __cdecl
FUN_3614b790(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,char *param_7,
            int param_8)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_36152130;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(code **)(param_1 + 0x24) = FUN_36152150;
  }
  if (param_2 == 9) {
    param_2 = 6;
  }
  if (param_4 < 0) {
    iVar4 = 0;
    param_4 = -param_4;
  }
  else if (0xf < param_4) {
    iVar4 = 2;
    param_4 = param_4 + -0x10;
  }
  if (((((0 < param_5) && (param_5 < 10)) && ((param_3 == 8 && ((7 < param_4 && (param_4 < 0x10)))))
       ) && (-1 < param_2)) && (((param_2 < 10 && (-1 < param_6)) && (param_6 < 4)))) {
    if (param_4 == 8) {
      param_4 = 9;
    }
    piVar2 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16b8);
    if (piVar2 != (int *)0x0) {
      *(int **)(param_1 + 0x1c) = piVar2;
      piVar2[6] = iVar4;
      iVar5 = 1 << ((byte)param_4 & 0x1f);
      piVar2[10] = param_4;
      piVar2[0xb] = iVar5 + -1;
      iVar4 = 1 << ((byte)(param_5 + 7) & 0x1f);
      piVar2[0x12] = param_5 + 7;
      piVar2[0x11] = iVar4;
      piVar2[0x13] = iVar4 + -1;
      *piVar2 = param_1;
      piVar2[9] = iVar5;
      piVar2[0x14] = (param_5 + 9U) / 3;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar5,2);
      piVar2[0xc] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[9],2);
      piVar2[0xe] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar2[0x11],2);
      piVar2[0xf] = iVar4;
      iVar4 = 1 << ((char)param_5 + 6U & 0x1f);
      piVar2[0x5a5] = iVar4;
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar4,4);
      uVar1 = piVar2[0x5a5];
      piVar2[3] = uVar1 * 4;
      piVar2[2] = iVar4;
      if (((piVar2[0xc] != 0) && (piVar2[0xe] != 0)) && ((piVar2[0xf] != 0 && (iVar4 != 0)))) {
        piVar2[0x5a7] = iVar4 + (uVar1 & 0xfffffffe);
        piVar2[0x5a4] = iVar4 + uVar1 * 3;
        piVar2[0x1f] = param_2;
        piVar2[0x20] = param_6;
        *(undefined1 *)((int)piVar2 + 0x1d) = 8;
        uVar3 = FUN_3614b620(param_1);
        return uVar3;
      }
      piVar2[1] = 0x29a;
      *(undefined **)(param_1 + 0x18) = PTR_s_insufficient_memory_3623c980;
      FUN_3614a6e0(param_1);
    }
    return 0xfffffffc;
  }
  return 0xfffffffe;
}

