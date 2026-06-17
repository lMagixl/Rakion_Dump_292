
/* public: int __thiscall CDrawPort::IsPointVisible(long,long,float,long,long)const  */

int __thiscall
CDrawPort::IsPointVisible
          (CDrawPort *this,long param_1,long param_2,float param_3,long param_4,long param_5)

{
  int iVar1;
  
                    /* 0x65640  2451  ?IsPointVisible@CDrawPort@@QBEHJJMJJ@Z */
  if (*(int *)this == 0) {
    return 0;
  }
  if ((((0 < param_1) && (param_1 <= (*(int *)(this + 0x10) - *(int *)(this + 8)) + -2)) &&
      (0 < param_2)) && (param_2 <= (*(int *)(this + 0x14) - *(int *)(this + 0xc)) + -2)) {
    iVar1 = FUN_36064470((int *)this,param_1,param_2,(int)param_3,param_4,(float)param_5);
    return iVar1;
  }
  return 0;
}

