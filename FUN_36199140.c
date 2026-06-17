
void __cdecl FUN_36199140(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  uVar3 = *param_1;
  puVar1 = param_1 + 1;
  puVar2 = param_1 + 2;
  param_1 = (undefined1 *)(uint)(byte)param_1[3];
  (**(code **)(*DAT_3637fb00 + 0x280))(uVar3,*puVar1,*puVar2,param_1);
  return;
}

