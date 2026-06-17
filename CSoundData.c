
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CSoundData::CSoundData(void) */

CSoundData * __thiscall CSoundData::CSoundData(CSoundData *this)

{
                    /* 0x9c6a0  234  ??0CSoundData@@QAE@XZ */
  CSerial::CSerial((CSerial *)this);
  *(undefined8 *)(this + 0x30) = _DAT_36227d98;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined2 *)(this + 0x26) = 0x40;
  return this;
}

