
void __cdecl FUN_36197e40(undefined1 *param_1)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  
  uVar2 = *param_1;
  puVar1 = (undefined2 *)(param_1 + 2);
  param_1 = (undefined1 *)(uint)(byte)param_1[1];
  (**(code **)(*DAT_3637fb00 + 0x1a8))(uVar2,param_1,*puVar1);
  return;
}

