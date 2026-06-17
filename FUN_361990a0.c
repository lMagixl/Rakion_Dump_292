
void __cdecl FUN_361990a0(undefined1 *param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  
  uVar5 = *param_1;
  puVar1 = (undefined2 *)(param_1 + 1);
  puVar2 = param_1 + 3;
  puVar3 = param_1 + 4;
  puVar4 = param_1 + 5;
  param_1 = (undefined1 *)(uint)(byte)param_1[6];
  (**(code **)(*DAT_3637fb00 + 0x278))(uVar5,*puVar1,*puVar2,*puVar3,*puVar4,param_1);
  return;
}

