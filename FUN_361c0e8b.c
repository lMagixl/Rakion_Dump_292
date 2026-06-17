
int FUN_361c0e8b(int *param_1,HANDLE param_2,undefined4 *param_3)

{
  int iVar1;
  LOGFONTA local_40;
  
  iVar1 = GetObjectA(param_2,0x3c,&local_40);
  if (iVar1 == 0) {
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_361c0cb6(param_1,&local_40,param_3);
  }
  return iVar1;
}

