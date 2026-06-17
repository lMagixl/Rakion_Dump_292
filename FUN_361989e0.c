
void __cdecl FUN_361989e0(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = param_1;
  bVar1 = *param_1;
  uVar4 = 0;
  uVar5 = 0;
  uVar3 = 0;
  param_1 = (char *)(uint)bVar1;
  if (bVar1 == 0) {
    uVar3 = *(undefined4 *)(pcVar2 + 1);
    uVar4 = *(undefined4 *)(pcVar2 + 5);
    uVar5 = *(undefined4 *)(pcVar2 + 9);
  }
  (**(code **)(*DAT_3637fb00 + 0x220))(param_1,uVar3,uVar4,uVar5);
  return;
}

