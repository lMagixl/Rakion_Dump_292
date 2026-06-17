
void __cdecl FUN_36198930(char *param_1)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar3 = param_1;
  bVar1 = *param_1;
  uVar4 = 0;
  uVar5 = 0;
  cVar2 = '\0';
  param_1 = (char *)(uint)bVar1;
  if (bVar1 == 0) {
    uVar4 = *(undefined4 *)(pcVar3 + 1);
    uVar5 = *(undefined4 *)(pcVar3 + 5);
    cVar2 = pcVar3[9];
  }
  (**(code **)(*DAT_3637fb00 + 0x214))(param_1,uVar4,uVar5,cVar2);
  return;
}

