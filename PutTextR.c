
/* public: void __thiscall CDrawPort::PutTextR(class CTString const &,long,long,unsigned long,int
   const &)const  */

void __thiscall
CDrawPort::PutTextR(CDrawPort *this,CTString *param_1,long param_2,long param_3,ulong param_4,
                   int *param_5)

{
  long lVar1;
  
                    /* 0x6aee0  2887  ?PutTextR@CDrawPort@@QBEXABVCTString@@JJKABH@Z */
  lVar1 = GetStringPixWidth(param_1);
  PutText(this,param_1,param_2 - lVar1,param_3,param_4,param_5);
  return;
}

