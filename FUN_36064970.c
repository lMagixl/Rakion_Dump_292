
void __fastcall FUN_36064970(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x68) - param_1[9];
  (*DAT_362c3d90)(param_1[6],iVar1,param_1[8] - param_1[6],
                  (*(int *)(*param_1 + 0x68) - param_1[7]) - iVar1);
  return;
}

