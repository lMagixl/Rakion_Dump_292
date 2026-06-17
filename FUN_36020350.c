
void __thiscall FUN_36020350(void *this,CTStream *param_1)

{
  undefined4 local_5;
  undefined1 local_1;
  
  local_1 = DAT_36223fdc;
  local_5 = DAT_36223fd8;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_5);
  CTStream::WriteRawChunk_t(param_1,(void *)((int)this + 4),4);
  CTStream::WriteRawChunk_t(param_1,(void *)((int)this + 8),4);
  CTStream::WriteRawChunk_t(param_1,(void *)((int)this + 0x10),4);
  CTStream::WriteRawChunk_t(param_1,(void *)((int)this + 0xc),4);
  return;
}

