
void __thiscall FUN_360ff350(void *this,int *param_1)

{
  *(char *)(param_1 + 4) = (char)param_1[4] + '\x01';
  if (DAT_362ccecc != 0) {
    CPrintF(s_Retrying_sequence___d__reliable_f_36235bfc,*param_1,(uint)*(ushort *)(param_1 + 1));
  }
  FUN_360ff1a0(this,param_1,1,0);
  return;
}

