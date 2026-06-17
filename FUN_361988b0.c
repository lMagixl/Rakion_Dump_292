
void __cdecl FUN_361988b0(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  
  puVar1 = (undefined4 *)(param_1 + 1);
  puVar2 = (undefined4 *)(param_1 + 5);
  puVar3 = (undefined4 *)(param_1 + 9);
  puVar4 = (undefined2 *)(param_1 + 0xd);
  param_1 = (undefined1 *)(uint)(byte)*param_1;
  (**(code **)(*DAT_3637fb00 + 0x20c))(param_1,*puVar1,*puVar2,*puVar3,*puVar4);
  return;
}

