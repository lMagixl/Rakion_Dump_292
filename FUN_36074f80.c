
void __cdecl FUN_36074f80(uint *param_1,int *param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int unaff_EBX;
  uint uVar2;
  int *unaff_retaddr;
  
  uVar2 = unaff_EBX * param_3;
  puVar1 = AllocMemory(uVar2 * 4);
  FUN_36062d20(param_1,puVar1,uVar2);
  (**(code **)(*param_2 + 0x3c))(param_2,param_4,&param_3);
  FUN_361c1116(unaff_retaddr,0,(uint *)0x0,(int)puVar1,0x15,unaff_EBX * 4,0,
               (undefined4 *)&stack0xffffffe4,1,0);
  (**(code **)(*unaff_retaddr + 8))(unaff_retaddr);
  FreeMemory(puVar1);
  return;
}

