
void __cdecl
FUN_36075c70(uint *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 unaff_EDI;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (DAT_362c3cf8 != (code *)0x0) {
    uVar2 = 0;
    puVar1 = &local_8;
    (**(code **)(*param_2 + 0x40))(param_2,param_5,puVar1,0,0);
    (*DAT_362c3cf8)(unaff_EDI,uVar2,local_8,uStack_4,puVar1);
    (**(code **)(*param_2 + 0x44))(param_2,param_5);
    return;
  }
  FUN_36074f80(param_1,param_2,param_4,param_5);
  return;
}

