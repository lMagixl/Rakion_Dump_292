
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::Fill(long,long,long,long,unsigned long)const  */

void __thiscall
CDrawPort::Fill(CDrawPort *this,long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x66210  1619  ?Fill@CDrawPort@@QBEXJJJJK@Z */
  uVar2 = param_5;
  if ((char)param_5 != -1) {
    Fill(this,param_1,param_2,param_3,param_4,param_5,param_5,param_5,param_5);
    return;
  }
  iVar3 = FUN_360648a0(&param_4,&param_1,&param_3,&param_4);
  if (iVar3 != 0) {
    if (*(int *)(_pGfx + 0xa38) == 0) {
      if (((param_1 == 0) && (param_2 == 0)) &&
         ((param_3 == *(int *)(this + 0x10) - *(int *)(this + 8) &&
          (param_4 == *(int *)(this + 0x14) - *(int *)(this + 0xc))))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
        FUN_36064940(param_4,param_3,param_1,param_2);
      }
      param_1 = uVar2 >> 0x18;
      (*DAT_362c3d48)((float)param_1 * _DAT_362287a4,(float)(uVar2 >> 0x10 & 0xff) * _DAT_362287a4,
                      (float)(uVar2 >> 8 & 0xff) * _DAT_362287a4,0x3f800000);
      (*DAT_362c3d4c)(0x4000);
      if (!bVar1) {
        FUN_36064970((int *)this);
        return;
      }
    }
    else if (*(int *)(_pGfx + 0xa38) == 1) {
      local_c = param_2 + *(int *)(this + 0xc);
      local_10 = param_1 + *(int *)(this + 8);
      param_1 = param_5 >> 8 | param_5 << 0x18;
      if ((((local_10 == 0) && (local_c == 0)) && (param_3 == *(int *)(*(int *)this + 100))) &&
         (param_4 == *(int *)(*(int *)this + 0x68))) {
        (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x90))(*(int **)(_pGfx + 0xa5c),0,0,1,param_1,0,0);
        return;
      }
      local_4 = local_c + param_4;
      local_8 = local_10 + param_3;
      (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x90))
                (*(int **)(_pGfx + 0xa5c),1,&local_10,1,param_1,0,0);
    }
  }
  return;
}

