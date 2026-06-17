
void __cdecl FUN_361993f0(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  
  uVar4 = *param_1;
  puVar1 = param_1 + 1;
  puVar2 = param_1 + 2;
  puVar3 = param_1 + 3;
  param_1 = (undefined1 *)(uint)(byte)param_1[4];
  (**(code **)(*DAT_3637fb00 + 0x29c))(uVar4,*puVar1,*puVar2,*puVar3,param_1);
  return;
}

