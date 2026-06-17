
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSoundObject::Play(class CSoundData *,unsigned long) */

void __thiscall CSoundObject::Play(CSoundObject *this,CSoundData *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  void *this_00;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa3630  2767  ?Play@CSoundObject@@QAEXPAVCSoundData@@K@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362131bf;
  local_c = ExceptionList;
  uVar1 = *(uint *)(this + 0x2c);
  ExceptionList = &local_c;
  Stop_internal(this,0);
  CSoundData::AddReference(param_1);
  CSoundData::RemReference(*(CSoundData **)(this + 8));
  *(CSoundData **)(this + 8) = param_1;
  iVar2 = CListNode::IsLinked((CListNode *)this);
  if (iVar2 == 0) {
    CSoundLibrary::AddToPendingList(_pSound,this);
  }
  *(undefined8 *)(this + 0x10) = _DAT_36227d98;
  *(undefined8 *)(this + 0x18) = _DAT_36227d98;
  *(ulong *)(this + 0x2c) = param_2 | 0x80000000;
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0;
  if ((*(byte *)(*(int *)(this + 8) + 0x44) & 1) != 0) {
    this_00 = (void *)FUN_361bf99c(0xc);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_3609dae0(this_00,(CTFileName *)(*(int *)(this + 8) + 0xc));
    }
    *(int **)(this + 0x9c) = piVar3;
  }
  if ((param_2 & 0x40000000) == 0) {
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined4 *)(this + 0x98) = 0;
    if ((uVar1 & 0x80000000) != 0) {
      if (((byte)this[0x2c] & 0x10) != 0) {
        *(float *)(this + 0x6c) = _DAT_362a51f8 * *(float *)(this + 0x6c) * _DAT_36227cf0;
        *(float *)(this + 0x70) = _DAT_362a51f8 * *(float *)(this + 0x70) * _DAT_36227cf0;
        ExceptionList = local_c;
        return;
      }
      *(float *)(this + 0x6c) = _DAT_362a51f4 * *(float *)(this + 0x6c);
      *(float *)(this + 0x70) = _DAT_362a51f4 * *(float *)(this + 0x70);
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined2 *)(this + 0x8c) = 0;
    *(undefined2 *)(this + 0x8e) = 0;
  }
  ExceptionList = local_c;
  return;
}

