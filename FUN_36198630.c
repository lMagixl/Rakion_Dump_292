
void __cdecl FUN_36198630(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  
  uVar3 = *param_1;
  puVar1 = (undefined4 *)(param_1 + 1);
  puVar2 = (undefined4 *)(param_1 + 5);
  param_1 = (undefined1 *)(uint)(byte)param_1[9];
  (**(code **)(*DAT_3637fb00 + 0x1f8))(uVar3,*puVar1,*puVar2,param_1);
  return;
}

