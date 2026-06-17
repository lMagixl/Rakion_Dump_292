
void __cdecl FUN_36197b60(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  bVar1 = *param_1;
  param_1 = (char *)(uint)bVar1;
  if (bVar1 != 0) {
    (**(code **)(*DAT_3637fb00 + 0x194))(param_1,0);
    return;
  }
  (**(code **)(*DAT_3637fb00 + 0x194))(0,*(undefined4 *)(pcVar2 + 1));
  return;
}

