
void __thiscall FUN_360203c0(void *this,CTStream *param_1)

{
  int *piVar1;
  long lVar2;
  int extraout_EDX;
  int iVar3;
  undefined4 local_5;
  undefined1 local_1;
  
  iVar3 = DAT_36223fe0;
  local_1 = DAT_36223fe4;
  piVar1 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar1 == iVar3) {
    local_5 = DAT_36223fe8;
    local_1 = DAT_36223fec;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_5);
    CTStream::ReadRawChunk_t(param_1,(void *)((int)this + 4),4);
    CTStream::ReadRawChunk_t(param_1,(void *)((int)this + 8),4);
    CTStream::ReadRawChunk_t(param_1,(void *)((int)this + 0x10),4);
    CTStream::ReadRawChunk_t(param_1,(void *)((int)this + 0xc),4);
  }
  else {
    CTStream::ReadRawChunk_t(param_1,(void *)((int)this + 4),4);
    CTStream::ReadRawChunk_t(param_1,(undefined4 *)((int)this + 8),4);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  iVar3 = 0;
  if ((*(int *)((int)this + 0x14) == 0) ||
     (lVar2 = CAnimObject::GetAnimsCt(this), iVar3 = extraout_EDX, lVar2 <= *(int *)((int)this + 8))
     ) {
    *(int *)((int)this + 8) = 0;
  }
  if ((iVar3 != 0) && (lVar2 = CAnimObject::GetAnimsCt(this), *(int *)((int)this + 0x10) < lVar2)) {
    return;
  }
  *(int *)((int)this + 0x10) = 0;
  return;
}

