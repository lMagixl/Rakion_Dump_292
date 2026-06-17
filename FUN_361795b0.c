
void __cdecl
FUN_361795b0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined1 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = param_1;
  for (uVar2 = (uint)(param_2 * param_3) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar7 = CONCAT22(CONCAT11(param_7,param_7),CONCAT11(param_7,param_7));
    puVar7 = puVar7 + 1;
  }
  for (uVar2 = param_2 * param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar7 = param_7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  iVar5 = param_2;
  if (param_5 <= param_2) {
    iVar5 = param_5;
  }
  if (param_3 < param_6) {
    param_6 = param_3;
  }
  uVar3 = param_2 - param_5;
  uVar2 = param_5 - param_2;
  iVar1 = 0;
  iVar4 = 0;
  param_2 = param_6;
  if (0 < param_6) {
    do {
      iVar6 = iVar5;
      if (0 < iVar5) {
        do {
          *(undefined1 *)(iVar1 + (int)param_1) = *(undefined1 *)(iVar4 + param_4);
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar4 = iVar4 + (((int)uVar2 < 0) - 1 & uVar2);
      iVar1 = iVar1 + (((int)uVar3 < 0) - 1 & uVar3);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

