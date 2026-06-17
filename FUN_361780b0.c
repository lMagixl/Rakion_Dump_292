
void __cdecl FUN_361780b0(uint param_1)

{
  undefined4 *in_EAX;
  CListNode *this;
  undefined4 extraout_ECX;
  int iVar1;
  uint unaff_EDI;
  
  iVar1 = unaff_EDI * 6;
  if (iVar1 + in_EAX[2] * -6 == 0 || iVar1 < in_EAX[2] * 6) {
    in_EAX[1] = unaff_EDI;
    return;
  }
  FUN_361776a0();
  this = (CListNode *)FUN_36175850(extraout_ECX,iVar1);
  if (this == (CListNode *)0x0) {
    FUN_36179330(in_EAX,unaff_EDI,param_1);
    return;
  }
  CListNode::Remove(this);
  *in_EAX = *(undefined4 *)(this + 0xc);
  in_EAX[1] = unaff_EDI;
  in_EAX[2] = *(uint *)(this + 8) / 6;
  in_EAX[4] = *(undefined4 *)(this + 0x10);
  in_EAX[3] = *(undefined4 *)(this + 0x14);
  return;
}

