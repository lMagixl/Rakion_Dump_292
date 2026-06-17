
/* public: __thiscall EDeath::EDeath(void) */

EDeath * __thiscall EDeath::EDeath(EDeath *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1aa4f0  304  ??0EDeath@@QAE@XZ */
  puStack_8 = &LAB_3621be31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = 0x50011;
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
  EDamage::EDamage((EDamage *)(this + 8));
  local_4 = CONCAT31(local_4._1_3_,1);
  ::ClearToDefault((EDamage *)(this + 8));
  ExceptionList = local_c;
  return this;
}

