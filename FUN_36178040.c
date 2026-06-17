
void __cdecl FUN_36178040(uint param_1)

{
  int iVar1;
  undefined4 *in_EAX;
  CListNode *this;
  undefined4 extraout_ECX;
  uint unaff_EBX;
  
  iVar1 = unaff_EBX * 8;
  if (iVar1 + in_EAX[2] * -8 == 0 || iVar1 < in_EAX[2] * 8) {
    in_EAX[1] = unaff_EBX;
    return;
  }
  FUN_36177610();
  this = (CListNode *)FUN_36175850(extraout_ECX,iVar1);
  if (this == (CListNode *)0x0) {
    FUN_361793b0(in_EAX,unaff_EBX,param_1);
    return;
  }
  CListNode::Remove(this);
  *in_EAX = *(undefined4 *)(this + 0xc);
  in_EAX[1] = unaff_EBX;
  in_EAX[2] = *(uint *)(this + 8) >> 3;
  in_EAX[4] = *(undefined4 *)(this + 0x10);
  in_EAX[3] = *(undefined4 *)(this + 0x14);
  return;
}

