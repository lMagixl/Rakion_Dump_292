
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36191f10(byte *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int local_9c10 [9985];
  undefined4 local_c;
  
  local_c = DAT_362abd90;
  piVar2 = local_9c10 + 2;
  iVar7 = 0x100;
  do {
    piVar2[-2] = 0;
    piVar2[-1] = 0;
    *piVar2 = 0;
    *(undefined2 *)(piVar2 + 1) = 0;
    *(undefined2 *)((int)piVar2 + 6) = 0;
    *(undefined2 *)(piVar2 + 2) = 0;
    *(undefined2 *)((int)piVar2 + 10) = 0;
    *(undefined2 *)(piVar2 + 3) = 0;
    piVar2[4] = 0;
    piVar8 = piVar2 + 5;
    piVar2 = piVar2 + 0x27;
    iVar7 = iVar7 + -1;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
  } while (iVar7 != 0);
  bVar1 = *param_1;
  piVar2 = local_9c10;
  for (iVar7 = 0x2700; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  if (bVar1 != 0) {
    piVar2 = local_9c10 + 2;
    uVar4 = (uint)bVar1;
    uVar5 = 1;
    do {
      iVar7 = *(int *)(param_1 + (uVar5 & 0xffff));
      uVar6 = uVar5 + 4;
      *piVar2 = iVar7;
      if (iVar7 != 0) {
        *(undefined2 *)(piVar2 + 1) = *(undefined2 *)(param_1 + (uVar6 & 0xffff));
        *(undefined2 *)((int)piVar2 + 6) = *(undefined2 *)(param_1 + (uVar5 + 6 & 0xffff));
        *(undefined2 *)(piVar2 + 2) = *(undefined2 *)(param_1 + (uVar5 + 8 & 0xffff));
        *(undefined2 *)((int)piVar2 + 10) = *(undefined2 *)(param_1 + (uVar5 + 10 & 0xffff));
        *(undefined2 *)(piVar2 + 3) = *(undefined2 *)(param_1 + (uVar5 + 0xc & 0xffff));
        uVar6 = uVar5 + 0xe;
      }
      piVar2 = piVar2 + 0x27;
      uVar4 = uVar4 - 1;
      uVar5 = uVar6;
    } while (uVar4 != 0);
  }
  (**(code **)(*DAT_3636fa98 + 0xc))(bVar1,local_9c10);
  return;
}

