
void __cdecl FUN_36197ad0(char *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = *param_1;
  uVar2 = 0;
  if (cVar1 == '\0') {
    local_8 = *(undefined4 *)(param_1 + 1);
    local_4 = *(undefined4 *)(param_1 + 7);
    uVar2 = *(undefined2 *)(param_1 + 0xb);
    param_1._0_2_ = *(undefined2 *)(param_1 + 5);
  }
  else {
    local_4 = 0;
    local_8 = 0;
    param_1._0_2_ = 0;
  }
  param_1 = (char *)CONCAT22(uVar2,param_1._0_2_);
  (**(code **)(*DAT_3637fb00 + 0x18c))(cVar1,&local_8,&param_1);
  return;
}

