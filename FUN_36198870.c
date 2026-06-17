
void __cdecl FUN_36198870(undefined1 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  
  uVar4 = *param_1;
  puVar1 = (undefined2 *)(param_1 + 1);
  puVar2 = (undefined2 *)(param_1 + 3);
  puVar3 = (undefined2 *)(param_1 + 6);
  param_1 = (undefined1 *)(uint)(byte)param_1[5];
  (**(code **)(*DAT_3637fb00 + 0x208))(uVar4,*puVar1,*puVar2,param_1,*puVar3);
  return;
}

