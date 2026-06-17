
void __cdecl FUN_36197f70(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar1 = (undefined4 *)(param_1 + 1);
  puVar2 = (undefined2 *)(param_1 + 5);
  puVar3 = (undefined2 *)(param_1 + 7);
  param_1 = (undefined1 *)(uint)(byte)*param_1;
  (**(code **)(*DAT_3637fb00 + 0x1b0))(param_1,*puVar1,*puVar2,*puVar3);
  return;
}

