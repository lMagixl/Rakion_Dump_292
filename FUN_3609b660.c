
undefined4 * __thiscall FUN_3609b660(void *this,undefined4 param_1,int param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212e0d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CUpdateable::CUpdateable((CUpdateable *)((int)this + 8));
  FUN_3609b820((CListHead *)((int)this + 0xc));
  *(undefined4 *)this = param_1;
  local_4 = 0;
  *(int *)((int)this + 4) = param_2;
  (*(code *)(&PTR_FUN_362a509c)[param_2 * 5])();
  CUpdateable::Invalidate((CUpdateable *)((int)this + 8));
  ExceptionList = pvStack_c;
  return this;
}

