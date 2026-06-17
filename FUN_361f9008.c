
void __cdecl FUN_361f9008(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int iVar1;
  int aiStack_90 [35];
  
  iVar1 = *(int *)(param_1 + 0x11c) + 0x80;
  if (DAT_362ade08 == '\0') {
    FUN_361fa075(param_3,*(short **)(param_2 + 0x50),aiStack_90,param_4,param_5,iVar1);
  }
  else {
    FUN_361fa4d7((undefined8 *)param_3,(undefined8 *)*(short **)(param_2 + 0x50),
                 (undefined8 *)aiStack_90,param_4,param_5,iVar1);
  }
  return;
}

