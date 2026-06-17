
void __cdecl FUN_361987a0(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined1 uVar10;
  
  uVar10 = *param_1;
  puVar1 = param_1 + 1;
  puVar2 = param_1 + 2;
  puVar3 = (undefined4 *)(param_1 + 6);
  puVar4 = param_1 + 5;
  puVar5 = (undefined2 *)(param_1 + 0xc);
  puVar6 = param_1 + 10;
  puVar7 = param_1 + 0xb;
  puVar8 = (undefined2 *)(param_1 + 3);
  puVar9 = (undefined4 *)(param_1 + 0xf);
  param_1 = (undefined1 *)(uint)(byte)param_1[0xe];
  (**(code **)(*DAT_3637fb00 + 0x200))
            (uVar10,*puVar1,*puVar2,*puVar8,*puVar4,*puVar3,*puVar6,*puVar7,*puVar5,param_1,*puVar9)
  ;
  return;
}

