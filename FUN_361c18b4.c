
int __thiscall
FUN_361c18b4(void *this,int *param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == (int *)0x0) || (param_7 == 0)) {
    iVar1 = -0x7789f794;
  }
  else {
    uVar2 = param_4;
    if (param_4 == 0xffffffff) {
      uVar2 = 0;
    }
    iVar1 = FUN_361c17fd(this,param_1,&param_2,&param_3,uVar2,&param_5,param_6);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(*param_1 + 0x58))
                          (param_1,param_2,param_3,uVar2,param_5,param_6,param_7), -1 < iVar1)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

