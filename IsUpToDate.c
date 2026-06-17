
/* public: int __thiscall CChangeableRT::IsUpToDate(class CUpdateableRT const &)const  */

int __thiscall CChangeableRT::IsUpToDate(CChangeableRT *this,CUpdateableRT *param_1)

{
  float fVar1;
  
                    /* 0x21ce0  2490  ?IsUpToDate@CChangeableRT@@QBEHABVCUpdateableRT@@@Z */
  fVar1 = CUpdateableRT::LastUpdateTime(param_1);
  if (*(float *)this < fVar1) {
    return 1;
  }
  return 0;
}

