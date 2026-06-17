
void __cdecl FUN_36198dd0(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  uVar2 = *param_1;
  puVar1 = param_1 + 1;
  param_1 = (undefined1 *)(uint)(byte)param_1[2];
  (**(code **)(*DAT_3637fb00 + 600))(uVar2,*puVar1,param_1);
  return;
}

