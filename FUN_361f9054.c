
void __cdecl FUN_361f9054(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  int iVar1;
  short asStack_90 [70];
  
  iVar1 = *(int *)(param_1 + 0x11c) + 0x80;
  if (DAT_362ade08 == '\0') {
    FUN_361fab8f(param_3,asStack_90,*(short **)(param_2 + 0x50),(int)param_4,param_5,iVar1);
  }
  else {
    FUN_361faeea((undefined8 *)param_3,(undefined8 *)asStack_90,
                 (undefined8 *)*(short **)(param_2 + 0x50),param_4,param_5,iVar1);
  }
  return;
}

