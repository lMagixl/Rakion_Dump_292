
/* public: void __thiscall CDrawPort::PutTextCXY(class CTString const &,long,long,unsigned long,int
   const &)const  */

void __thiscall
CDrawPort::PutTextCXY
          (CDrawPort *this,CTString *param_1,long param_2,long param_3,ulong param_4,int *param_5)

{
  long lVar1;
  ulonglong uVar2;
  
                    /* 0x6ae80  2883  ?PutTextCXY@CDrawPort@@QBEXABVCTString@@JJKABH@Z */
  lVar1 = GetStringPixWidth(param_1);
  uVar2 = FUN_361bfd6c();
  PutText(this,param_1,param_2 - lVar1 / 2,param_3 - (int)uVar2 / 2,param_4,param_5);
  return;
}

