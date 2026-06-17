
int FUN_361c2d88(int *param_1,int *param_2,uint *param_3,int *param_4,int *param_5,uint *param_6,
                uint param_7,int param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_78 [9];
  undefined1 local_54 [24];
  uint local_3c;
  uint local_38;
  byte local_34 [16];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_361d4c71((undefined4 *)local_34);
  piVar1 = param_4;
  if (param_1 == (int *)0x0) {
    iVar3 = -0x7789f794;
    goto LAB_361c2f1c;
  }
  if (param_4 == (int *)0x0) {
    iVar3 = -0x7789f794;
    goto LAB_361c2f1c;
  }
  if (((param_7 & 0xffff) == 5) || (param_8 != 0)) {
LAB_361c2ec5:
    uVar2 = 1;
    if (param_1 == piVar1) {
      uVar2 = 0x10001;
    }
    iVar3 = FUN_361d4d0b(local_34,&local_a0,piVar1,param_5,param_6,0,uVar2);
    if ((iVar3 < 0) ||
       (iVar3 = FUN_361c1116(param_1,param_2,param_3,local_a0,local_9c,local_98,param_5,local_78,
                             param_7,param_8), iVar3 < 0)) goto LAB_361c2f1c;
  }
  else {
    if (param_2 != param_5) {
      if ((param_2 != (int *)0x0) && (param_5 != (int *)0x0)) {
        iVar3 = 0x100;
        bVar6 = true;
        piVar4 = param_2;
        piVar5 = param_5;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *piVar4 == *piVar5;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar6);
        if (bVar6) goto LAB_361c2e03;
      }
      goto LAB_361c2ec5;
    }
LAB_361c2e03:
    if (param_3 == (uint *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,local_54);
      local_14 = 0;
      local_10 = 0;
      local_c = local_3c;
      local_8 = local_38;
    }
    else {
      local_14 = *param_3;
      local_10 = param_3[1];
      local_c = param_3[2];
      local_8 = param_3[3];
    }
    if (param_6 == (uint *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1,local_54);
      local_24 = 0;
      local_20 = 0;
      local_1c = local_3c;
      local_18 = local_38;
    }
    else {
      local_24 = *param_6;
      local_20 = param_6[1];
      local_1c = param_6[2];
      local_18 = param_6[3];
    }
    if ((local_c - local_14 != local_1c - local_24) || (local_8 - local_10 != local_18 - local_20))
    goto LAB_361c2ec5;
    (**(code **)(*piVar1 + 0xc))(piVar1,&param_4);
    FUN_361cec59(1);
    iVar3 = (**(code **)(*param_4 + 0x70))(param_4,piVar1,&local_24,1,param_1,&local_14);
    FUN_361cec59(0);
    (**(code **)(*param_4 + 8))(param_4);
    if (iVar3 < 0) goto LAB_361c2ec5;
  }
  iVar3 = 0;
LAB_361c2f1c:
  thunk_FUN_361d4c81(local_34);
  return iVar3;
}

